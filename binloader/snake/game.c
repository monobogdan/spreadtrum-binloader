/*
*
*	Spreadtrum libruntime
*
*	©2025 Bogdan Nikolaev. All rights reserved.
*
*	Special thanks to Ilya_ZX
*/

#define GLOBAL(ctx) (uint32)(*ctx->WindowFunc)
#define SCONST(ctx, str) (unsigned char*)((uint32)(*ctx->WindowFunc) + str)

#include <api.h>
#include "font.h"
#include "lcd.h"
#include "system.h"
#include "resources.h"

#define STAGE_MENU 0
#define STAGE_INGAME 1
#define STAGE_GAMEOVER 2

#define MOVEMENT_UP 0
#define MOVEMENT_LEFT 1
#define MOVEMENT_RIGHT 2
#define MOVEMENT_DOWN 3

#define MAX_SEGMENTS 20

#define SEGMENT_HEAD 0

typedef struct {
	uint8 X;
	uint8 Y;
} CSnakeSegment;

typedef struct {
	uint8 Stage;
	uint32 Score;
	
	uint8 AppleX, AppleY;
	uint8 Movement;
	CSnakeSegment Segments[MAX_SEGMENTS];
	uint8 SegmentLength;
} CGameState;

CGameState _GGameState = { 0 };

#define GRID_SIZE 16

int RandMax(int max)
{
	return rand() % max - 1;
}

void MoveApple(CGameState* state)
{
	state->AppleX = RandMax(LCD_WIDTH / (GRID_SIZE - 1));
	state->AppleY = RandMax(LCD_HEIGHT / (GRID_SIZE - 1));
}

void GameStart(LoaderContext* context, CGameState* state)
{
	state->Stage = STAGE_INGAME;
	state->Score = 0;
	
	MoveApple(state);
	
	state->Segments[SEGMENT_HEAD].X = 3;
	state->Segments[SEGMENT_HEAD].Y = 3;
	state->SegmentLength = 2;
}

void GameUpdate(LoaderContext* context, CGameState* state)
{
	for(int i = state->SegmentLength - 1; i > 0; i--)
	{
		state->Segments[i].X = state->Segments[i - 1].X;
		state->Segments[i].Y = state->Segments[i - 1].Y;
	}
	
	if(state->Movement == MOVEMENT_UP)
		state->Segments[SEGMENT_HEAD].Y--;
	
	if(state->Movement == MOVEMENT_LEFT)
		state->Segments[SEGMENT_HEAD].X--;
	
	if(state->Movement == MOVEMENT_RIGHT)
		state->Segments[SEGMENT_HEAD].X++;
	
	if(state->Movement == MOVEMENT_DOWN)
		state->Segments[SEGMENT_HEAD].Y++;
	
	if(state->Segments[SEGMENT_HEAD].X == state->AppleX && state->Segments[SEGMENT_HEAD].Y == state->AppleY)
	{
		MoveApple(state);
		state->Score++;
		
		if(state->SegmentLength < MAX_SEGMENTS) {
			int newSeg = state->SegmentLength;
			
			state->SegmentLength++;
			state->Segments[newSeg].X = -1;
			state->Segments[newSeg].Y = -1;
		}
	}
}

void GameDraw(LoaderContext* context, CGameState* state)
{
	// Fill background
	short* frameBuffer = LcdBegin();
	
	for(int i = 0; i < LCD_WIDTH / PATTERN_WIDTH; i++)
	{
		for(int j = 0; j < LCD_HEIGHT / PATTERN_HEIGHT; j++)
			LcdDrawBitmap(frameBuffer, (short*)(GLOBAL(context) + (uint32)&pattern), PATTERN_WIDTH, PATTERN_HEIGHT, i * PATTERN_WIDTH, j * PATTERN_HEIGHT);
	}
	
	for(int i = 1; i < state->SegmentLength; i++)
		LcdDrawBitmap(frameBuffer, (short*)(GLOBAL(context) + (uint32)&section), SECTION_WIDTH, SECTION_HEIGHT, state->Segments[i].X * SECTION_WIDTH, state->Segments[i].Y * SECTION_HEIGHT);
	
	// Draw head
	LcdDrawBitmap(frameBuffer, (short*)(GLOBAL(context) + (uint32)&head), SECTION_WIDTH, SECTION_HEIGHT, state->Segments[0].X * SECTION_WIDTH, state->Segments[0].Y * SECTION_HEIGHT);

	LcdDrawBitmap(frameBuffer, (short*)(GLOBAL(context) + (uint32)&apple), APPLE_WIDTH, APPLE_HEIGHT, state->AppleX * GRID_SIZE, state->AppleY * GRID_SIZE);
}

void GameTick(LoaderContext* context, CGameState* state)
{
	GameUpdate(context, state);
	GameDraw(context, state);
}

#define MMK_CreateWinTimerPtr 0x290A74 + 1
#define FPS 1000 / 3

void SetupTimer(uint32 window)
{
	((int(*)(uint32 window, uint32 timeout, uint32 isPeriodic)) MMK_CreateWinTimerPtr)(window, FPS, 1);
}

__attribute__((section(".main")))
int WindowProc(LoaderContext* context, uint32 window, uint32 msgId, uint32 dparam)
{
	CGameState* gameState = (CGameState*)(GLOBAL(context) + (uint32)&_GGameState);
	uint8 tick = 0;
	
	if(gameState->Stage == STAGE_MENU)
	{
		SetupTimer(window);
		
		GameStart(context, gameState);
		gameState->Stage = STAGE_INGAME;
	}
	
	// Simulate tick (debug only)
	if(msgId == MSG_TIMER)
		GameTick(context, gameState);
	
	switch(msgId)
	{
		case MSG_KEYDOWN_LEFT:
			gameState->Movement = MOVEMENT_LEFT;
			
			break;
		case MSG_KEYDOWN_RIGHT:
			gameState->Movement = MOVEMENT_RIGHT;
			
			break;
		case MSG_KEYDOWN_UP:
			gameState->Movement = MOVEMENT_UP;
			
			break;
		case MSG_KEYDOWN_DOWN:
			gameState->Movement = MOVEMENT_DOWN;
			
			break;
	}
	
	// Send MSG
	((void(*)(uint32 window, uint32 msg, uint32 res)) 0x36A3CA + 1)(window, MSG_FULL_PAINT, 0);
	
	return 1;
}