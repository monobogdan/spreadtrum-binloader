TOOLCHAIN = ../
OBJCOPY = $(TOOLCHAIN)armeb-eabi-objcopy
ELFROOT = "C:/Users/mono/Documents/Visual Studio 2008/Projects/ElfLoader/ElfLoader/"
GCC = $(TOOLCHAIN)armeb-eabi-gcc
GCCFLAGS = -I. -mno-unaligned-access -Os -fno-pic -T ld.script -march=armv4t -mthumb -mbig-endian -nostartfiles -ffreestanding -I$(ELFROOT) -Ilibnesemu/
LDDFLAGS = -Wl,-zmax-page-size=1,--build-id=none
ELFGCCFLAGS = -I. -mno-unaligned-access -O1 -fno-pic -T ldelf.script -march=armv4t -mthumb -mbig-endian -nostartfiles -ffreestanding -I$(ELFROOT) -Ilibnesemu/

ELF2PROG = C:/Users/mono/source/repos/M_Klay/Elf2Prog/bin/Debug/Elf2Prog.exe

DISK = E:/

LOADERDEF = -DLOADER
PATCHDEF = -DPATCH
SRC = binloader/main.c
RUNTIMEDEF = -DLIBRUNTIME
LIBRTSRC = libruntime/run.c

all: binloader games patches

patches:
	$(GCC) $(ELFGCCFLAGS) $(PATCHDEF) $(LDDFLAGS) patches/fmpatch.c -o bin/fmpatch.elf
	$(OBJCOPY) -O binary -j .text bin/fmpatch.elf bin/fmpatch.bin

binloader:
	$(GCC) $(GCCFLAGS) $(LOADERDEF) $(LDDFLAGS) $(SRC) -o bin/binloader.elf
	$(OBJCOPY) -O binary -j .text bin/binloader.elf bin/binloader.bin
	
	echo Binloader is built
	
games: snake
	
snake:
	$(GCC) $(ELFGCCFLAGS) $(RUNTIMEDEF) $(LDDFLAGS) snake/game.c -o bin/snake.elf
	$(OBJCOPY) -O binary bin/snake.elf bin/snake.app
	
copy:
	copy bin/libruntime.elf $(DISK)
	
.PHONY: binloader snake patches