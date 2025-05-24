/* key status */
#define     KEY_PRESSED                                 0xfa00              /*!< key pressed */
#define     KEY_RELEASED                                0xfb00              /*!< key released */      
#define     KEY_LONG_PRESSED                            0xfc00              /*!< key long pressed */   
#define     KEY_LONG_RELEASED                           0xfd00              /*!< key long released */   
#define     KEY_REPEATED                                0xfe00              /*!< key repeated */   

/* key code */
#define     KEY_NONE                                    0x00                /*!< press none */                    
#define     KEY_UP                                      0x01                /*!< press [up] */
#define     KEY_DOWN                                    0x02                /*!< press [down] */
#define     KEY_LEFT                                    0x03                /*!< press [left] */
#define     KEY_RIGHT                                   0x04                /*!< press [right] */
#define     KEY_GREEN                                   0x05                /*!< press [Green] */
#define     KEY_CAMREA                                  0x06                /*!< press [CAMERA] */

#define     KEY_1                                       0x08                /*!< press [1] */
#define     KEY_2                                       0x09                /*!< press [2] */
#define     KEY_3                                       0x0a                /*!< press [3] */
#define     KEY_4                                       0x0b                /*!< press [4] */
#define     KEY_5                                       0x0c                /*!< press [5] */
#define     KEY_6                                       0x0d                /*!< press [6] */
#define     KEY_7                                       0x0e                /*!< press [7] */
#define     KEY_8                                       0x0f                /*!< press [8] */
#define     KEY_9                                       0x10                /*!< press [9] */
#define     KEY_STAR                                    0x11                /*!< press [*] */
#define     KEY_0                                       0x12                /*!< press [0] */
#define     KEY_HASH                                    0x13                /*!< press [#] */
#define     KEY_SPUP                                    0x14
#define     KEY_SPDW                                    0x15
#define     KEY_OK                                      0x16                /*!< press left softkey(OK) */
#define     KEY_CANCEL                                  0x17                /*!< press right softkey (Cancel) */
#define     KEY_RED                                     0x18                /*!< press red key */
#define     KEY_UPSIDEKEY                               0x19                /*!< press up side key */
#define     KEY_DOWNSIDEKEY                             0x1a                /*!< press down side key */
#define     KEY_WEB                                     0x1b                /*!< press web key */
#define     KEY_GPIO_SIG1                               0x1c
#define     KEY_GPIO_SIG2                               0x1d
#define     KEY_FLIP                                    0x1e                /*!< flip gpio  */
#define     KEY_HEADSET_BUTTIN                          0x1f                /*!< handset gpio buttion */
#define     KEY_HEADSET_DETECT                          0x20                /*!< handset gpio detect */
#define     KEY_SDCARD_DETECT                           0x21                /*!< SD card detct */
#define     KEY_VIDEO_TEL                               0x22
#define     KEY_PLAYANDSTOP                             0x23
#define     KEY_FORWARD                                 0x24
#define     KEY_BACKWARD                                0x25
#define     KEY_MIDDLE                                  0x26
#define     KEY_AT                                      0x27
// QWERT_ADD
#define     KEY_Q                                       0x28  
#define     KEY_W                                       0x29  
#define     KEY_E                                       0x2a  
#define     KEY_R                                       0x2b  
#define     KEY_T                                       0x2c  
#define     KEY_Y                                       0x2d  
#define     KEY_U                                       0x2e  
#define     KEY_I                                       0x2f  
#define     KEY_O                                       0x30  
#define     KEY_P                                       0x31  
#define     KEY_A                                       0x32  
#define     KEY_S                                       0x33  
#define     KEY_D                                       0x34  
#define     KEY_F                                       0x35  
#define     KEY_G                                       0x36  
#define     KEY_H                                       0x37  
#define     KEY_J                                       0x38  
#define     KEY_K                                       0x39  
#define     KEY_L                                       0x3a  
#define     KEY_DEL                                     0x3b  
#define     KEY_Z                                       0x3c  
#define     KEY_X                                       0x3d  
#define     KEY_C                                       0x3e  
#define     KEY_V                                       0x3f  
#define     KEY_B                                       0x40  
#define     KEY_N                                       0x41  
#define     KEY_M                                       0x42  
#define     KEY_COMMA                                   0x43
#define     KEY_PERIOD                                  0x44
#define     KEY_ENTER                                   0x45
#define     KEY_FN                                      0x46
#define     KEY_SHIFT                                   0x47
#define     KEY_AT_QWERTY                               0x48
#define     KEY_SPACE                                   0x49
#define     KEY_AND                                     0x4a
#define     KEY_QUESTION                                0x4b
#define     KEY_CTRL                                    0x4c
#define     KEY_PLUS                                    0x4d                // +
#define     KEY_LEFT_PARENTHESIS                        0x4e                // (
#define     KEY_RIGHT_PARENTHESIS                       0x4f                // )
#define     KEY_MINUS                                   0x50                // -
#define     KEY_DOUBLE_QUOTES                           0x51                // "
#define     KEY_SEMICOLON                               0x52                // ;
#define     KEY_COLON                                   0x53                // : 
#define     KEY_SLASH                                   0x54                // /
#define     KEY_SHIFT_AND                               0x55                // &
#define     KEY_EXCLAMATION                             0x56                // !
// QWERT_ADD
#define     KEY_SLIDE                                   0x57                //滑盖消息
#define     KEY_TV                                      0x58
#define     KEY_CALL2                                   0x59
#define     KEY_CALL3                                   0x5a
#define     KEY_MP3                                     0x5b
#define     KEY_NOTES                                   0x5c
#define     KEY_SMS                                     0x5d
#define     KEY_CALENDER                                0x5e
#define     KEY_IE                                      0x5f
#define     KEY_HANG                                    0x60
#define     KEY_VOL_UP                                  0x61
#define     KEY_VOL_DOWN                                0x62
#define     KEY_MO                                      0x63
// zhiguo.li_cr225830
#define     KEY_HOOK                                    0x64
#define     KEY_HANDFREE                                0x65

#define     KEY_CALL4                                   0x66
#define     KEY_POWER                                   0x67                //for PDA power key
#define     KEY_MENU                                    0x68                //for PDA menu key

#ifdef SPRT_PRJ_YA855	// wy@20130522
#define 	  KEY_SRAECH					0x69
#endif


#define     KEY_MAX_NUM                                 0xff
       
/*define the key message, key message = (key mode | key code), from 0xfa00 to 0xffff*/ 
/*define the key down message id 0xfa00 to 0xfaff*/
#define     MSG_KEYDOWN                                 (KEY_PRESSED | KEY_NONE)   
#define     MSG_KEYDOWN_UP                              (KEY_PRESSED | KEY_UP)     
#define     MSG_KEYDOWN_DOWN                            (KEY_PRESSED | KEY_DOWN)   
#define     MSG_KEYDOWN_LEFT                            (KEY_PRESSED | KEY_LEFT)   
#define     MSG_KEYDOWN_RIGHT                           (KEY_PRESSED | KEY_RIGHT)        
#define     MSG_KEYDOWN_GREEN                           (KEY_PRESSED | KEY_GREEN)  
#define     MSG_KEYDOWN_CAMERA                          (KEY_PRESSED | KEY_CAMREA) 
#define     MSG_KEYDOWN_1                               (KEY_PRESSED | KEY_1)      
#define     MSG_KEYDOWN_2                               (KEY_PRESSED | KEY_2)      
#define     MSG_KEYDOWN_3                               (KEY_PRESSED | KEY_3)      
#define     MSG_KEYDOWN_4                               (KEY_PRESSED | KEY_4)      
#define     MSG_KEYDOWN_5                               (KEY_PRESSED | KEY_5)      
#define     MSG_KEYDOWN_6                               (KEY_PRESSED | KEY_6)      
#define     MSG_KEYDOWN_7                               (KEY_PRESSED | KEY_7)      
#define     MSG_KEYDOWN_8                               (KEY_PRESSED | KEY_8)      
#define     MSG_KEYDOWN_9                               (KEY_PRESSED | KEY_9)      
#define     MSG_KEYDOWN_STAR                            (KEY_PRESSED | KEY_STAR)   
#define     MSG_KEYDOWN_0                               (KEY_PRESSED | KEY_0)      
#define     MSG_KEYDOWN_HASH                            (KEY_PRESSED | KEY_HASH)   
#define     MSG_KEYDOWN_SPUP                            (KEY_PRESSED | KEY_SPUP)            
#define     MSG_KEYDOWN_SPDW                            (KEY_PRESSED | KEY_SPDW)            
#define     MSG_KEYDOWN_OK                              (KEY_PRESSED | KEY_OK)              
#define     MSG_KEYDOWN_CANCEL                          (KEY_PRESSED | KEY_CANCEL)          

#ifdef GUI_CTRL_SCROLL_KEY
#define     MSG_KEYDOWN_LSKOK                           (KEY_PRESSED | KEY_OK)              
#define     MSG_KEYDOWN_RSKOK                           (KEY_PRESSED | KEY_CANCEL)
#endif

#define     MSG_KEYDOWN_RED                             (KEY_PRESSED | KEY_RED)             
#define     MSG_KEYDOWN_UPSIDE                          (KEY_PRESSED | KEY_UPSIDEKEY)       
#define     MSG_KEYDOWN_DOWNSIDE                        (KEY_PRESSED | KEY_DOWNSIDEKEY)     
#define     MSG_KEYDOWN_WEB                             (KEY_PRESSED | KEY_WEB)             
#define     MSG_KEYDOWN_GPIO_SIG1                       (KEY_PRESSED | KEY_GPIO_SIG1)       
#define     MSG_KEYDOWN_GPIO_SIG2                       (KEY_PRESSED | KEY_GPIO_SIG2)       
#define     MSG_KEYDOWN_FLIP                            (KEY_PRESSED | KEY_FLIP)            
#define     MSG_KEYDOWN_HEADSET_BUTTON                  (KEY_PRESSED | KEY_HEADSET_BUTTIN)  
#define     MSG_KEYDOWN_HEADSET_DETECT                  (KEY_PRESSED | KEY_HEADSET_DETECT)  
#define     MSG_KEYDOWN_SDCARD_DETECT                   (KEY_PRESSED | KEY_SDCARD_DETECT)
#define     MSG_KEYDOWN_VIDEO_TEL                       (KEY_PRESSED | KEY_VIDEO_TEL)
#define     MSG_KEYDOWN_PLAYANDSTOP                     (KEY_PRESSED | KEY_PLAYANDSTOP)
#define     MSG_KEYDOWN_FORWARD                         (KEY_PRESSED | KEY_FORWARD)
#define     MSG_KEYDOWN_BACKWARD                        (KEY_PRESSED | KEY_BACKWARD)
#define     MSG_KEYDOWN_MIDDLE                          (KEY_PRESSED | KEY_MIDDLE)
#define     MSG_KEYDOWN_AT                              (KEY_PRESSED | KEY_AT)

// QWERT_ADD
#define     MSG_KEYDOWN_Q                               (KEY_PRESSED | KEY_Q)
#define     MSG_KEYDOWN_W                               (KEY_PRESSED | KEY_W)
#define     MSG_KEYDOWN_E                               (KEY_PRESSED | KEY_E)
#define     MSG_KEYDOWN_R                               (KEY_PRESSED | KEY_R)
#define     MSG_KEYDOWN_T                               (KEY_PRESSED | KEY_T)
#define     MSG_KEYDOWN_Y                               (KEY_PRESSED | KEY_Y)
#define     MSG_KEYDOWN_U                               (KEY_PRESSED | KEY_U)
#define     MSG_KEYDOWN_I                               (KEY_PRESSED | KEY_I)
#define     MSG_KEYDOWN_O                               (KEY_PRESSED | KEY_O)
#define     MSG_KEYDOWN_P                               (KEY_PRESSED | KEY_P)
#define     MSG_KEYDOWN_A                               (KEY_PRESSED | KEY_A)
#define     MSG_KEYDOWN_S                               (KEY_PRESSED | KEY_S)
#define     MSG_KEYDOWN_D                               (KEY_PRESSED | KEY_D)
#define     MSG_KEYDOWN_F                               (KEY_PRESSED | KEY_F)
#define     MSG_KEYDOWN_G                               (KEY_PRESSED | KEY_G)
#define     MSG_KEYDOWN_H                               (KEY_PRESSED | KEY_H)
#define     MSG_KEYDOWN_J                               (KEY_PRESSED | KEY_J)
#define     MSG_KEYDOWN_K                               (KEY_PRESSED | KEY_K)
#define     MSG_KEYDOWN_L                               (KEY_PRESSED | KEY_L)
#define     MSG_KEYDOWN_DEL                             (KEY_PRESSED | KEY_DEL)
#define     MSG_KEYDOWN_Z                               (KEY_PRESSED | KEY_Z)
#define     MSG_KEYDOWN_X                               (KEY_PRESSED | KEY_X)
#define     MSG_KEYDOWN_C                               (KEY_PRESSED | KEY_C)
#define     MSG_KEYDOWN_V                               (KEY_PRESSED | KEY_V)
#define     MSG_KEYDOWN_B                               (KEY_PRESSED | KEY_B)
#define     MSG_KEYDOWN_N                               (KEY_PRESSED | KEY_N)
#define     MSG_KEYDOWN_M                               (KEY_PRESSED | KEY_M)
#define     MSG_KEYDOWN_COMMA                           (KEY_PRESSED | KEY_COMMA)
#define     MSG_KEYDOWN_PERIOD                          (KEY_PRESSED | KEY_PERIOD)
#define     MSG_KEYDOWN_ENTER                           (KEY_PRESSED | KEY_ENTER)
#define     MSG_KEYDOWN_FN                              (KEY_PRESSED | KEY_FN)
#define     MSG_KEYDOWN_SHIFT                           (KEY_PRESSED | KEY_SHIFT)
#define     MSG_KEYDOWN_AT_QWERTY                       (KEY_PRESSED | KEY_AT_QWERTY)
#define     MSG_KEYDOWN_SPACE                           (KEY_PRESSED | KEY_SPACE)
#define     MSG_KEYDOWN_AND                             (KEY_PRESSED | KEY_AND)
#define     MSG_KEYDOWN_QUESTION                        (KEY_PRESSED | KEY_QUESTION)
#define     MSG_KEYDOWN_CTRL                            (KEY_PRESSED | KEY_CTRL)

#define     MSG_KEYDOWN_PLUS                            (KEY_PRESSED | KEY_PLUS)
#define     MSG_KEYDOWN_LPARENTHESIS                    (KEY_PRESSED | KEY_LEFT_PARENTHESIS)
#define     MSG_KEYDOWN_RPARENTHESIS                    (KEY_PRESSED | KEY_RIGHT_PARENTHESIS)
#define     MSG_KEYDOWN_MINUS                           (KEY_PRESSED | KEY_MINUS)
#define     MSG_KEYDOWN_DQUOTES                         (KEY_PRESSED | KEY_DOUBLE_QUOTES)
#define     MSG_KEYDOWN_SEMICOLON                       (KEY_PRESSED | KEY_SEMICOLON)
#define     MSG_KEYDOWN_COLON                           (KEY_PRESSED | KEY_COLON)
#define     MSG_KEYDOWN_SLASH                           (KEY_PRESSED | KEY_SLASH)
#define     MSG_KEYDOWN_SAND                            (KEY_PRESSED | KEY_SHIFT_AND)
#define     MSG_KEYDOWN_EXCLAMATION                     (KEY_PRESSED | KEY_EXCLAMATION)
// QWERT_ADD

#define     MSG_KEYDOWN_SLIDE                           (KEY_PRESSED | KEY_SLIDE)
#define     MSG_KEYDOWN_TV                              (KEY_PRESSED | KEY_TV)
#define     MSG_KEYDOWN_CALL1                           (KEY_PRESSED | KEY_GREEN) //same as green key define!
#define     MSG_KEYDOWN_CALL2                           (KEY_PRESSED | KEY_CALL2)
#define     MSG_KEYDOWN_CALL3                           (KEY_PRESSED | KEY_CALL3)
#define     MSG_KEYDOWN_CALL4                           (KEY_PRESSED | KEY_CALL4)
#define     MSG_KEYDOWN_MP3                             (KEY_PRESSED | KEY_MP3)
#define     MSG_KEYDOWN_NOTES                           (KEY_PRESSED | KEY_NOTES)
#define     MSG_KEYDOWN_SMS                             (KEY_PRESSED | KEY_SMS)
#define     MSG_KEYDOWN_CALENDER                        (KEY_PRESSED | KEY_CALENDER)
#define     MSG_KEYDOWN_IE                              (KEY_PRESSED | KEY_IE)
#define     MSG_KEYDOWN_HANG                            (KEY_PRESSED | KEY_HANG)
#define     MSG_KEYDOWN_VOL_UP                          (KEY_PRESSED | KEY_VOL_UP)
#define     MSG_KEYDOWN_VOL_DOWN                        (KEY_PRESSED | KEY_VOL_DOWN)
#define     MSG_KEYDOWN_MO                              (KEY_PRESSED | KEY_MO)

// zhiguo.li_cr225830
#define     MSG_KEYDOWN_HOOK                            (KEY_PRESSED | KEY_HOOK)
#define     MSG_KEYDOWN_HANDSFREE                       (KEY_PRESSED | KEY_HANDFREE)

#define     MSG_KEYDOWN_POWER                           (KEY_PRESSED | KEY_POWER)
#define     MSG_KEYDOWN_MENU                            (KEY_PRESSED | KEY_MENU)
#ifdef SPRT_PRJ_YA855	// wy@20130522
#define     MSG_KEYDOWN_SRAECH                     (KEY_PRESSED | KEY_SRAECH)
#endif

#define     MSG_KEYDOWN_MAX_NUM                         (KEY_PRESSED | KEY_MAX_NUM) 

/*define the key up message, from 0xfb00 to 0xfbff*/    
#define     MSG_KEYUP                                   (KEY_RELEASED | KEY_NONE)
#define     MSG_KEYUP_UP                                (KEY_RELEASED | KEY_UP)            
#define     MSG_KEYUP_DOWN                              (KEY_RELEASED | KEY_DOWN)          
#define     MSG_KEYUP_LEFT                              (KEY_RELEASED | KEY_LEFT)          
#define     MSG_KEYUP_RIGHT                             (KEY_RELEASED | KEY_RIGHT)          
#define     MSG_KEYUP_GREEN                             (KEY_RELEASED | KEY_GREEN)          
#define     MSG_KEYUP_CAMERA                            (KEY_RELEASED | KEY_CAMREA)          
#define     MSG_KEYUP_1                                 (KEY_RELEASED | KEY_1)              
#define     MSG_KEYUP_2                                 (KEY_RELEASED | KEY_2)              
#define     MSG_KEYUP_3                                 (KEY_RELEASED | KEY_3)              
#define     MSG_KEYUP_4                                 (KEY_RELEASED | KEY_4)              
#define     MSG_KEYUP_5                                 (KEY_RELEASED | KEY_5)              
#define     MSG_KEYUP_6                                 (KEY_RELEASED | KEY_6)              
#define     MSG_KEYUP_7                                 (KEY_RELEASED | KEY_7)              
#define     MSG_KEYUP_8                                 (KEY_RELEASED | KEY_8)              
#define     MSG_KEYUP_9                                 (KEY_RELEASED | KEY_9)              
#define     MSG_KEYUP_STAR                              (KEY_RELEASED | KEY_STAR)          
#define     MSG_KEYUP_0                                 (KEY_RELEASED | KEY_0)              
#define     MSG_KEYUP_HASH                              (KEY_RELEASED | KEY_HASH)          
#define     MSG_KEYUP_OK                                (KEY_RELEASED | KEY_OK)              
#define     MSG_KEYUP_CANCEL                            (KEY_RELEASED | KEY_CANCEL)          
#define     MSG_KEYUP_RED                               (KEY_RELEASED | KEY_RED)              
#define     MSG_KEYUP_UPSIDE                            (KEY_RELEASED | KEY_UPSIDEKEY)      
#define     MSG_KEYUP_DOWNSIDE                          (KEY_RELEASED | KEY_DOWNSIDEKEY)      
#define     MSG_KEYUP_WEB                               (KEY_RELEASED | KEY_WEB)            
#define     MSG_KEYUP_GPIO_SIG1                         (KEY_RELEASED | KEY_GPIO_SIG1)      
#define     MSG_KEYUP_GPIO_SIG2                         (KEY_RELEASED | KEY_GPIO_SIG2)     
#define     MSG_KEYUP_FLIP                              (KEY_RELEASED | KEY_FLIP)          
#define     MSG_KEYUP_HEADSET_BUTTON                    (KEY_RELEASED | KEY_HEADSET_BUTTIN)
#define     MSG_KEYUP_HEADSET_DETECT                    (KEY_RELEASED | KEY_HEADSET_DETECT)
#define     MSG_KEYUP_SDCARD_DETECT                     (KEY_RELEASED | KEY_SDCARD_DETECT)
#define     MSG_KEYUP_VIDEO_TEL                         (KEY_RELEASED | KEY_VIDEO_TEL)
#define     MSG_KEYUP_PLAYANDSTOP                       (KEY_RELEASED | KEY_PLAYANDSTOP)
#define     MSG_KEYUP_FORWARD                           (KEY_RELEASED | KEY_FORWARD)
#define     MSG_KEYUP_BACKWARD                          (KEY_RELEASED | KEY_BACKWARD)
#define     MSG_KEYUP_MIDDLE                            (KEY_RELEASED | KEY_MIDDLE)

// QWERT_ADD
#define     MSG_KEYUP_AT                                (KEY_RELEASED | KEY_AT)

#define     MSG_KEYUP_Q                                 (KEY_RELEASED | KEY_Q)
#define     MSG_KEYUP_W                                 (KEY_RELEASED | KEY_W)
#define     MSG_KEYUP_E                                 (KEY_RELEASED | KEY_E)
#define     MSG_KEYUP_R                                 (KEY_RELEASED | KEY_R)
#define     MSG_KEYUP_T                                 (KEY_RELEASED | KEY_T)
#define     MSG_KEYUP_Y                                 (KEY_RELEASED | KEY_Y)
#define     MSG_KEYUP_U                                 (KEY_RELEASED | KEY_U)
#define     MSG_KEYUP_I                                 (KEY_RELEASED | KEY_I)
#define     MSG_KEYUP_O                                 (KEY_RELEASED | KEY_O)
#define     MSG_KEYUP_P                                 (KEY_RELEASED | KEY_P)
#define     MSG_KEYUP_A                                 (KEY_RELEASED | KEY_A)
#define     MSG_KEYUP_S                                 (KEY_RELEASED | KEY_S)
#define     MSG_KEYUP_D                                 (KEY_RELEASED | KEY_D)
#define     MSG_KEYUP_F                                 (KEY_RELEASED | KEY_F)
#define     MSG_KEYUP_G                                 (KEY_RELEASED | KEY_G)
#define     MSG_KEYUP_H                                 (KEY_RELEASED | KEY_H)
#define     MSG_KEYUP_J                                 (KEY_RELEASED | KEY_J)
#define     MSG_KEYUP_K                                 (KEY_RELEASED | KEY_K)
#define     MSG_KEYUP_L                                 (KEY_RELEASED | KEY_L)
#define     MSG_KEYUP_DEL                               (KEY_RELEASED | KEY_DEL)
#define     MSG_KEYUP_Z                                 (KEY_RELEASED | KEY_Z)
#define     MSG_KEYUP_X                                 (KEY_RELEASED | KEY_X)
#define     MSG_KEYUP_C                                 (KEY_RELEASED | KEY_C)
#define     MSG_KEYUP_V                                 (KEY_RELEASED | KEY_V)
#define     MSG_KEYUP_B                                 (KEY_RELEASED | KEY_B)
#define     MSG_KEYUP_N                                 (KEY_RELEASED | KEY_N)
#define     MSG_KEYUP_M                                 (KEY_RELEASED | KEY_M)
#define     MSG_KEYUP_COMMA                             (KEY_RELEASED | KEY_COMMA)
#define     MSG_KEYUP_PERIOD                            (KEY_RELEASED | KEY_PERIOD)
#define     MSG_KEYUP_ENTER                             (KEY_RELEASED | KEY_ENTER)
#define     MSG_KEYUP_FN                                (KEY_RELEASED | KEY_FN)
#define     MSG_KEYUP_SHIFT                             (KEY_RELEASED | KEY_SHIFT)
#define     MSG_KEYUP_AT_QWERTY                         (KEY_RELEASED | KEY_AT_QWERTY)
#define     MSG_KEYUP_SPACE                             (KEY_RELEASED | KEY_SPACE)
#define     MSG_KEYUP_AND                               (KEY_RELEASED | KEY_AND)
#define     MSG_KEYUP_QUESTION                          (KEY_RELEASED | KEY_QUESTION)
#define     MSG_KEYUP_CTRL                              (KEY_RELEASED | KEY_CTRL)

#define     MSG_KEYUP_PLUS                              (KEY_RELEASED | KEY_PLUS)
#define     MSG_KEYUP_LPARENTHESIS                      (KEY_RELEASED | KEY_LEFT_PARENTHESIS)
#define     MSG_KEYUP_RPARENTHESIS                      (KEY_RELEASED | KEY_RIGHT_PARENTHESIS)
#define     MSG_KEYUP_MINUS                             (KEY_RELEASED | KEY_MINUS)
#define     MSG_KEYUP_DQUOTES                           (KEY_RELEASED | KEY_DOUBLE_QUOTES)
#define     MSG_KEYUP_SEMICOLON                         (KEY_RELEASED | KEY_SEMICOLON)
#define     MSG_KEYUP_COLON                             (KEY_RELEASED | KEY_COLON)
#define     MSG_KEYUP_SLASH                             (KEY_RELEASED | KEY_SLASH)
#define     MSG_KEYUP_SAND                              (KEY_RELEASED | KEY_SHIFT_AND)
#define     MSG_KEYUP_EXCLAMATION                       (KEY_RELEASED | KEY_EXCLAMATION)

// QWERT_ADD
#define     MSG_KEYUP_SLIDE                             (KEY_RELEASED | KEY_SLIDE)
#define     MSG_KEYUP_TV                                (KEY_RELEASED | KEY_TV)
#define     MSG_KEYUP_CALL1                             (KEY_RELEASED | KEY_GREEN) // same as green key define!!
#define     MSG_KEYUP_CALL2                             (KEY_RELEASED | KEY_CALL2)
#define     MSG_KEYUP_CALL3                             (KEY_RELEASED | KEY_CALL3)
#define     MSG_KEYUP_CALL4                             (KEY_RELEASED | KEY_CALL4)
#define     MSG_KEYUP_MP3                               (KEY_RELEASED | KEY_MP3)
#define     MSG_KEYUP_NOTES                             (KEY_RELEASED | KEY_NOTES)
#define     MSG_KEYUP_SMS                               (KEY_RELEASED | KEY_SMS)
#define     MSG_KEYUP_CALENDER                          (KEY_RELEASED | KEY_CALENDER)
#define     MSG_KEYUP_IE                                (KEY_RELEASED | KEY_IE)
#define     MSG_KEYUP_HANG                              (KEY_RELEASED | KEY_HANG)
#define     MSG_KEYUP_VOL_UP                            (KEY_RELEASED | KEY_VOL_UP)
#define     MSG_KEYUP_VOL_DOWN                          (KEY_RELEASED | KEY_VOL_DOWN)
#define     MSG_KEYUP_MO                                (KEY_RELEASED | KEY_MO)

// zhiguo.li_cr225830
#define     MSG_KEYUP_HANDSFREE                         (KEY_LONG_RELEASED | KEY_HANDFREE) 
#define     MSG_KEYUP_HOOK                              (KEY_RELEASED | KEY_HOOK)

#define     MSG_KEYUP_POWER                             (KEY_RELEASED | KEY_POWER)
#define     MSG_KEYUP_MENU                              (KEY_RELEASED | KEY_MENU)
#ifdef SPRT_PRJ_YA855	// wy@20130522
#define     MSG_KEYUP_SRAECH                            (KEY_RELEASED | KEY_SRAECH)
#endif


#define     MSG_KEYUP_MAX_NUM                           (KEY_RELEASED | KEY_MAX_NUM) 

/*define the key long message*, from 0xfc00 to 0xfcff*/
#define     MSG_KEYLONG                                 (KEY_LONG_PRESSED | KEY_NONE)
#define     MSG_KEYLONG_UP                              (KEY_LONG_PRESSED | KEY_UP)           
#define     MSG_KEYLONG_DOWN                            (KEY_LONG_PRESSED | KEY_DOWN)         
#define     MSG_KEYLONG_LEFT                            (KEY_LONG_PRESSED | KEY_LEFT)         
#define     MSG_KEYLONG_RIGHT                           (KEY_LONG_PRESSED | KEY_RIGHT)        
#define     MSG_KEYLONG_GREEN                           (KEY_LONG_PRESSED | KEY_GREEN)        
#define     MSG_KEYLONG_CAMREA                          (KEY_LONG_PRESSED | KEY_CAMREA)       
#define     MSG_KEYLONG_1                               (KEY_LONG_PRESSED | KEY_1)            
#define     MSG_KEYLONG_2                               (KEY_LONG_PRESSED | KEY_2)            
#define     MSG_KEYLONG_3                               (KEY_LONG_PRESSED | KEY_3)            
#define     MSG_KEYLONG_4                               (KEY_LONG_PRESSED | KEY_4)            
#define     MSG_KEYLONG_5                               (KEY_LONG_PRESSED | KEY_5)            
#define     MSG_KEYLONG_6                               (KEY_LONG_PRESSED | KEY_6)            
#define     MSG_KEYLONG_7                               (KEY_LONG_PRESSED | KEY_7)            
#define     MSG_KEYLONG_8                               (KEY_LONG_PRESSED | KEY_8)            
#define     MSG_KEYLONG_9                               (KEY_LONG_PRESSED | KEY_9)            
#define     MSG_KEYLONG_STAR                            (KEY_LONG_PRESSED | KEY_STAR)         
#define     MSG_KEYLONG_0                               (KEY_LONG_PRESSED | KEY_0)            
#define     MSG_KEYLONG_HASH                            (KEY_LONG_PRESSED | KEY_HASH)         
#define     MSG_KEYLONG_OK                              (KEY_LONG_PRESSED | KEY_OK)           
#define     MSG_KEYLONG_CANCEL                          (KEY_LONG_PRESSED | KEY_CANCEL)       
#define     MSG_KEYLONG_RED                             (KEY_LONG_PRESSED | KEY_RED)          
#define     MSG_KEYLONG_UPSIDE                          (KEY_LONG_PRESSED | KEY_UPSIDEKEY)    
#define     MSG_KEYLONG_DOWNSIDE                        (KEY_LONG_PRESSED | KEY_DOWNSIDEKEY)  
#define     MSG_KEYLONG_WEB                             (KEY_LONG_PRESSED | KEY_WEB)
#define     MSG_KEYLONG_GPIO_SIG1                       (KEY_LONG_PRESSED | KEY_GPIO_SIG1)
#define     MSG_KEYLONG_GPIO_SIG2                       (KEY_LONG_PRESSED | KEY_GPIO_SIG2)
#define     MSG_KEYLONG_FLIP                            (KEY_LONG_PRESSED | KEY_FLIP)
#define     MSG_KEYLONG_HEADSET_BUTTON                  (KEY_LONG_PRESSED | KEY_HEADSET_BUTTIN)
#define     MSG_KEYLONG_HEADSET_DETECT                  (KEY_LONG_PRESSED | KEY_HEADSET_DETECT)
#define     MSG_KEYLONG_SDCARD_DETECT                   (KEY_LONG_PRESSED | KEY_SDCARD_DETECT)
#define     MSG_KEYLONG_VIDEO_TEL                       (KEY_LONG_PRESSED | KEY_VIDEO_TEL)
#define     MSG_KEYLONG_PLAYANDSTOP                     (KEY_LONG_PRESSED | KEY_PLAYANDSTOP)
#define     MSG_KEYLONG_FORWARD                         (KEY_LONG_PRESSED | KEY_FORWARD)
#define     MSG_KEYLONG_BACKWARD                        (KEY_LONG_PRESSED | KEY_BACKWARD)
#define     MSG_KEYLONG_MIDDLE                          (KEY_LONG_PRESSED | KEY_MIDDLE)

// QWERT_ADD
#define     MSG_KEYLONG_AT                              (KEY_LONG_PRESSED | KEY_AT)

#define     MSG_KEYLONG_Q                               (KEY_LONG_PRESSED | KEY_Q)
#define     MSG_KEYLONG_W                               (KEY_LONG_PRESSED | KEY_W)
#define     MSG_KEYLONG_E                               (KEY_LONG_PRESSED | KEY_E)
#define     MSG_KEYLONG_R                               (KEY_LONG_PRESSED | KEY_R)
#define     MSG_KEYLONG_T                               (KEY_LONG_PRESSED | KEY_T)
#define     MSG_KEYLONG_Y                               (KEY_LONG_PRESSED | KEY_Y)
#define     MSG_KEYLONG_U                               (KEY_LONG_PRESSED | KEY_U)
#define     MSG_KEYLONG_I                               (KEY_LONG_PRESSED | KEY_I)
#define     MSG_KEYLONG_O                               (KEY_LONG_PRESSED | KEY_O)
#define     MSG_KEYLONG_P                               (KEY_LONG_PRESSED | KEY_P)
#define     MSG_KEYLONG_A                               (KEY_LONG_PRESSED | KEY_A)
#define     MSG_KEYLONG_S                               (KEY_LONG_PRESSED | KEY_S)
#define     MSG_KEYLONG_D                               (KEY_LONG_PRESSED | KEY_D)
#define     MSG_KEYLONG_F                               (KEY_LONG_PRESSED | KEY_F)
#define     MSG_KEYLONG_G                               (KEY_LONG_PRESSED | KEY_G)
#define     MSG_KEYLONG_H                               (KEY_LONG_PRESSED | KEY_H)
#define     MSG_KEYLONG_J                               (KEY_LONG_PRESSED | KEY_J)
#define     MSG_KEYLONG_K                               (KEY_LONG_PRESSED | KEY_K)
#define     MSG_KEYLONG_L                               (KEY_LONG_PRESSED | KEY_L)
#define     MSG_KEYLONG_DEL                             (KEY_LONG_PRESSED | KEY_DEL)
#define     MSG_KEYLONG_Z                               (KEY_LONG_PRESSED | KEY_Z)
#define     MSG_KEYLONG_X                               (KEY_LONG_PRESSED | KEY_X)
#define     MSG_KEYLONG_C                               (KEY_LONG_PRESSED | KEY_C)
#define     MSG_KEYLONG_V                               (KEY_LONG_PRESSED | KEY_V)
#define     MSG_KEYLONG_B                               (KEY_LONG_PRESSED | KEY_B)
#define     MSG_KEYLONG_N                               (KEY_LONG_PRESSED | KEY_N)
#define     MSG_KEYLONG_M                               (KEY_LONG_PRESSED | KEY_M)
#define     MSG_KEYLONG_COMMA                           (KEY_LONG_PRESSED | KEY_COMMA)
#define     MSG_KEYLONG_PERIOD                          (KEY_LONG_PRESSED | KEY_PERIOD)
#define     MSG_KEYLONG_ENTER                           (KEY_LONG_PRESSED | KEY_ENTER)
#define     MSG_KEYLONG_FN                              (KEY_LONG_PRESSED | KEY_FN)
#define     MSG_KEYLONG_SHIFT                           (KEY_LONG_PRESSED | KEY_SHIFT)
#define     MSG_KEYLONG_AT_QWERTY                       (KEY_LONG_PRESSED | KEY_AT_QWERTY)
#define     MSG_KEYLONG_SPACE                           (KEY_LONG_PRESSED | KEY_SPACE)
#define     MSG_KEYLONG_AND                             (KEY_LONG_PRESSED | KEY_AND)
#define     MSG_KEYLONG_QUESTION                        (KEY_LONG_PRESSED | KEY_QUESTION)
#define     MSG_KEYLONG_CTRL                            (KEY_LONG_PRESSED | KEY_CTRL)

#define     MSG_KEYLONG_PLUS                            (KEY_LONG_PRESSED | KEY_PLUS)
#define     MSG_KEYLONG_LPARENTHESIS                    (KEY_LONG_PRESSED | KEY_LEFT_PARENTHESIS)
#define     MSG_KEYLONG_RPARENTHESIS                    (KEY_LONG_PRESSED | KEY_RIGHT_PARENTHESIS)
#define     MSG_KEYLONG_MINUS                           (KEY_LONG_PRESSED | KEY_MINUS)
#define     MSG_KEYLONG_DQUOTES                         (KEY_LONG_PRESSED | KEY_DOUBLE_QUOTES)
#define     MSG_KEYLONG_SEMICOLON                       (KEY_LONG_PRESSED | KEY_SEMICOLON)
#define     MSG_KEYLONG_COLON                           (KEY_LONG_PRESSED | KEY_COLON)
#define     MSG_KEYLONG_SLASH                           (KEY_LONG_PRESSED | KEY_SLASH)
#define     MSG_KEYLONG_SAND                            (KEY_LONG_PRESSED | KEY_SHIFT_AND)
#define     MSG_KEYLONG_EXCLAMATION                     (KEY_LONG_PRESSED | KEY_EXCLAMATION)

// QWERT_ADD
#define     MSG_KEYLONG_TV                              (KEY_LONG_PRESSED | KEY_TV)
#define     MSG_KEYLONG_CALL1                           (KEY_LONG_PRESSED | KEY_GREEN) // same as green key define!!
#define     MSG_KEYLONG_CALL2                           (KEY_LONG_PRESSED | KEY_CALL2)
#define     MSG_KEYLONG_CALL3                           (KEY_LONG_PRESSED | KEY_CALL3)
#define     MSG_KEYLONG_CALL4                           (KEY_LONG_PRESSED | KEY_CALL4)
#define     MSG_KEYLONG_MP3                             (KEY_LONG_PRESSED | KEY_MP3)
#define     MSG_KEYLONG_NOTES                           (KEY_LONG_PRESSED | KEY_NOTES)
#define     MSG_KEYLONG_SMS                             (KEY_LONG_PRESSED | KEY_SMS)
#define     MSG_KEYLONG_CALENDER                        (KEY_LONG_PRESSED | KEY_CALENDER)
#define     MSG_KEYLONG_IE                              (KEY_LONG_PRESSED | KEY_IE)
#define     MSG_KEYLONG_HANG                            (KEY_LONG_PRESSED | KEY_HANG)
#define     MSG_KEYLONG_VOL_UP                          (KEY_LONG_PRESSED | KEY_VOL_UP)
#define     MSG_KEYLONG_VOL_DOWN                        (KEY_LONG_PRESSED | KEY_VOL_DOWN)
#define     MSG_KEYLONG_MO                              (KEY_LONG_PRESSED | KEY_MO)

#define     MSG_KEYLONG_POWER                           (KEY_LONG_PRESSED | KEY_POWER) 
#define     MSG_KEYLONG_MENU                            (KEY_LONG_PRESSED | KEY_MENU)
#ifdef SPRT_PRJ_YA855	// wy@20130522
#define     MSG_KEYLONG_SRAECH                           (KEY_LONG_PRESSED | KEY_SRAECH)
#endif


#define     MSG_KEYLONG_MAX_NUM                         (KEY_LONG_PRESSED | KEY_MAX_NUM) 

/*define the key pressup message id 0xfd00 to 0xfdff*/
#define     MSG_KEYPRESSUP                              (KEY_LONG_RELEASED | KEY_NONE)
#define     MSG_KEYPRESSUP_UP                           (KEY_LONG_RELEASED | KEY_UP)
#define     MSG_KEYPRESSUP_DOWN                         (KEY_LONG_RELEASED | KEY_DOWN)
#define     MSG_KEYPRESSUP_LEFT                         (KEY_LONG_RELEASED | KEY_LEFT)
#define     MSG_KEYPRESSUP_RIGHT                        (KEY_LONG_RELEASED | KEY_RIGHT)
#define     MSG_KEYPRESSUP_GREEN                        (KEY_LONG_RELEASED | KEY_GREEN)
#define     MSG_KEYPRESSUP_CAMERA                       (KEY_LONG_RELEASED | KEY_CAMREA)
#define     MSG_KEYPRESSUP_1                            (KEY_LONG_RELEASED | KEY_1)            
#define     MSG_KEYPRESSUP_2                            (KEY_LONG_RELEASED | KEY_2)          
#define     MSG_KEYPRESSUP_3                            (KEY_LONG_RELEASED | KEY_3)
#define     MSG_KEYPRESSUP_4                            (KEY_LONG_RELEASED | KEY_4)    
#define     MSG_KEYPRESSUP_5                            (KEY_LONG_RELEASED | KEY_5)         
#define     MSG_KEYPRESSUP_6                            (KEY_LONG_RELEASED | KEY_6)      
#define     MSG_KEYPRESSUP_7                            (KEY_LONG_RELEASED | KEY_7)
#define     MSG_KEYPRESSUP_8                            (KEY_LONG_RELEASED | KEY_8)
#define     MSG_KEYPRESSUP_9                            (KEY_LONG_RELEASED | KEY_9)
#define     MSG_KEYPRESSUP_STAR                         (KEY_LONG_RELEASED | KEY_STAR)
#define     MSG_KEYPRESSUP_0                            (KEY_LONG_RELEASED | KEY_0)
#define     MSG_KEYPRESSUP_HASH                         (KEY_LONG_RELEASED | KEY_HASH)
#define     MSG_KEYPRESSUP_SPUP                         (KEY_LONG_RELEASED | KEY_SPUP)
#define     MSG_KEYPRESSUP_SPDW                         (KEY_LONG_RELEASED | KEY_SPDW)
#define     MSG_KEYPRESSUP_OK                           (KEY_LONG_RELEASED | KEY_OK)
#define     MSG_KEYPRESSUP_CANCEL                       (KEY_LONG_RELEASED | KEY_CANCEL)
#define     MSG_KEYPRESSUP_RED                          (KEY_LONG_RELEASED | KEY_RED)
#define     MSG_KEYPRESSUP_UPSIDE                       (KEY_LONG_RELEASED | KEY_UPSIDEKEY)
#define     MSG_KEYPRESSUP_DOWNSIDE                     (KEY_LONG_RELEASED | KEY_DOWNSIDEKEY)
#define     MSG_KEYPRESSUP_WEB                          (KEY_LONG_RELEASED | KEY_WEB)
#define     MSG_KEYPRESSUP_GPIO_SIG1                    (KEY_LONG_RELEASED | KEY_GPIO_SIG1)      
#define     MSG_KEYPRESSUP_GPIO_SIG2                    (KEY_LONG_RELEASED | KEY_GPIO_SIG2)      
#define     MSG_KEYPRESSUP_FLIP                         (KEY_LONG_RELEASED | KEY_FLIP)           
#define     MSG_KEYPRESSUP_HEADSET_BUTTON               (KEY_LONG_RELEASED | KEY_HEADSET_BUTTIN) 
#define     MSG_KEYPRESSUP_HEADSET_DETECT               (KEY_LONG_RELEASED | KEY_HEADSET_DETECT) 
#define     MSG_KEYPRESSUP_SD_DETECT                    (KEY_LONG_RELEASED | KEY_SDCARD_DETECT)  
#define     MSG_KEYPRESSUP_VIDEO_TEL                    (KEY_LONG_RELEASED | KEY_VIDEO_TEL)
#define     MSG_KEYPRESSUP_PLAYANDSTOP                  (KEY_LONG_RELEASED | KEY_PLAYANDSTOP)
#define     MSG_KEYPRESSUP_FORWARD                      (KEY_LONG_RELEASED | KEY_FORWARD)
#define     MSG_KEYPRESSUP_BACKWARD                     (KEY_LONG_RELEASED | KEY_BACKWARD)
#define     MSG_KEYPRESSUP_MIDDLE                       (KEY_LONG_RELEASED | KEY_MIDDLE)

// QWERT_ADD
#define     MSG_KEYPRESSUP_AT                           (KEY_LONG_RELEASED | KEY_AT)

#define     MSG_KEYPRESSUP_Q                            (KEY_LONG_RELEASED | KEY_Q)
#define     MSG_KEYPRESSUP_W                            (KEY_LONG_RELEASED | KEY_W)
#define     MSG_KEYPRESSUP_E                            (KEY_LONG_RELEASED | KEY_E)
#define     MSG_KEYPRESSUP_R                            (KEY_LONG_RELEASED | KEY_R)
#define     MSG_KEYPRESSUP_T                            (KEY_LONG_RELEASED | KEY_T)
#define     MSG_KEYPRESSUP_Y                            (KEY_LONG_RELEASED | KEY_Y)
#define     MSG_KEYPRESSUP_U                            (KEY_LONG_RELEASED | KEY_U)
#define     MSG_KEYPRESSUP_I                            (KEY_LONG_RELEASED | KEY_I)
#define     MSG_KEYPRESSUP_O                            (KEY_LONG_RELEASED | KEY_O)
#define     MSG_KEYPRESSUP_P                            (KEY_LONG_RELEASED | KEY_P)
#define     MSG_KEYPRESSUP_A                            (KEY_LONG_RELEASED | KEY_A)
#define     MSG_KEYPRESSUP_S                            (KEY_LONG_RELEASED | KEY_S)
#define     MSG_KEYPRESSUP_D                            (KEY_LONG_RELEASED | KEY_D)
#define     MSG_KEYPRESSUP_F                            (KEY_LONG_RELEASED | KEY_F)
#define     MSG_KEYPRESSUP_G                            (KEY_LONG_RELEASED | KEY_G)
#define     MSG_KEYPRESSUP_H                            (KEY_LONG_RELEASED | KEY_H)
#define     MSG_KEYPRESSUP_J                            (KEY_LONG_RELEASED | KEY_J)
#define     MSG_KEYPRESSUP_K                            (KEY_LONG_RELEASED | KEY_K)
#define     MSG_KEYPRESSUP_L                            (KEY_LONG_RELEASED | KEY_L)
#define     MSG_KEYPRESSUP_DEL                          (KEY_LONG_RELEASED | KEY_DEL)
#define     MSG_KEYPRESSUP_Z                            (KEY_LONG_RELEASED | KEY_Z)
#define     MSG_KEYPRESSUP_X                            (KEY_LONG_RELEASED | KEY_X)
#define     MSG_KEYPRESSUP_C                            (KEY_LONG_RELEASED | KEY_C)
#define     MSG_KEYPRESSUP_V                            (KEY_LONG_RELEASED | KEY_V)
#define     MSG_KEYPRESSUP_B                            (KEY_LONG_RELEASED | KEY_B)
#define     MSG_KEYPRESSUP_N                            (KEY_LONG_RELEASED | KEY_N)
#define     MSG_KEYPRESSUP_M                            (KEY_LONG_RELEASED | KEY_M)
#define     MSG_KEYPRESSUP_COMMA                        (KEY_LONG_RELEASED | KEY_COMMA)
#define     MSG_KEYPRESSUP_PERIOD                       (KEY_LONG_RELEASED | KEY_PERIOD)
#define     MSG_KEYPRESSUP_ENTER                        (KEY_LONG_RELEASED | KEY_ENTER)
#define     MSG_KEYPRESSUP_FN                           (KEY_LONG_RELEASED | KEY_FN)
#define     MSG_KEYPRESSUP_SHIFT                        (KEY_LONG_RELEASED | KEY_SHIFT)
#define     MSG_KEYPRESSUP_AT_QWERTY                    (KEY_LONG_RELEASED | KEY_AT_QWERTY)
#define     MSG_KEYPRESSUP_SPACE                        (KEY_LONG_RELEASED | KEY_SPACE)
#define     MSG_KEYPRESSUP_AND                          (KEY_LONG_RELEASED | KEY_AND)
#define     MSG_KEYPRESSUP_QUESTION                     (KEY_LONG_RELEASED | KEY_QUESTION)
#define     MSG_KEYPRESSUP_CTRL                         (KEY_LONG_RELEASED | KEY_CTRL)

#define     MSG_KEYPRESSUP_PLUS                         (KEY_LONG_RELEASED | KEY_PLUS)
#define     MSG_KEYPRESSUP_LPARENTHESIS                 (KEY_LONG_RELEASED | KEY_LEFT_PARENTHESIS)
#define     MSG_KEYPRESSUP_RPARENTHESIS                 (KEY_LONG_RELEASED | KEY_RIGHT_PARENTHESIS)
#define     MSG_KEYPRESSUP_MINUS                        (KEY_LONG_RELEASED | KEY_MINUS)
#define     MSG_KEYPRESSUP_DQUOTES                      (KEY_LONG_RELEASED | KEY_DOUBLE_QUOTES)
#define     MSG_KEYPRESSUP_SEMICOLON                    (KEY_LONG_RELEASED | KEY_SEMICOLON)
#define     MSG_KEYPRESSUP_COLON                        (KEY_LONG_RELEASED | KEY_COLON)
#define     MSG_KEYPRESSUP_SLASH                        (KEY_LONG_RELEASED | KEY_SLASH)
#define     MSG_KEYPRESSUP_SAND                         (KEY_LONG_RELEASED | KEY_SHIFT_AND)
#define     MSG_KEYPRESSUP_EXCLAMATION                  (KEY_LONG_RELEASED | KEY_EXCLAMATION)
// QWERT_ADD

#define     MSG_KEYPRESSUP_TV                           (KEY_LONG_RELEASED | KEY_TV)
#define     MSG_KEYPRESSUP_CALL1                        (KEY_LONG_RELEASED | KEY_GREEN)
#define     MSG_KEYPRESSUP_CALL2                        (KEY_LONG_RELEASED | KEY_CALL2)
#define     MSG_KEYPRESSUP_CALL3                        (KEY_LONG_RELEASED | KEY_CALL3)
#define     MSG_KEYPRESSUP_CALL4                        (KEY_LONG_RELEASED | KEY_CALL4)
#define     MSG_KEYPRESSUP_MP3                          (KEY_LONG_RELEASED | KEY_MP3)
#define     MSG_KEYPRESSUP_NOTES                        (KEY_LONG_RELEASED | KEY_NOTES)
#define     MSG_KEYPRESSUP_SMS                          (KEY_LONG_RELEASED | KEY_SMS)
#define     MSG_KEYPRESSUP_CALENDER                     (KEY_LONG_RELEASED | KEY_CALENDER)
#define     MSG_KEYPRESSUP_IE                           (KEY_LONG_RELEASED | KEY_IE)
#define     MSG_KEYPRESSUP_HANG                         (KEY_LONG_RELEASED | KEY_HANG)
#define     MSG_KEYPRESSUP_VOL_UP                       (KEY_LONG_RELEASED | KEY_VOL_UP)
#define     MSG_KEYPRESSUP_VOL_DOWN                     (KEY_LONG_RELEASED | KEY_VOL_DOWN)
#define     MSG_KEYPRESSUP_MO                           (KEY_LONG_RELEASED | KEY_MO)

#define     MSG_KEYPRESSUP_POWER                        (KEY_LONG_RELEASED | KEY_POWER) 
#define     MSG_KEYPRESSUP_MENU                         (KEY_LONG_RELEASED | KEY_MENU)
#ifdef SPRT_PRJ_YA855	// wy@20130522
#define     MSG_KEYPRESSUP_SRAECH                            (KEY_LONG_RELEASED | KEY_SRAECH)
#endif


#define     MSG_KEYPRESSUP_MAX_NUM                      (KEY_LONG_RELEASED | KEY_MAX_NUM) 

/*define the key pressup message id 0xfe00 to 0xfeff*/
#define     MSG_KEYREPEAT                               (KEY_REPEATED | KEY_NONE)
#define     MSG_KEYREPEAT_UP                            (KEY_REPEATED | KEY_UP)
#define     MSG_KEYREPEAT_DOWN                          (KEY_REPEATED | KEY_DOWN)
#define     MSG_KEYREPEAT_LEFT                          (KEY_REPEATED | KEY_LEFT)
#define     MSG_KEYREPEAT_RIGHT                         (KEY_REPEATED | KEY_RIGHT)
#define     MSG_KEYREPEAT_GREEN                         (KEY_REPEATED | KEY_GREEN)
#define     MSG_KEYREPEAT_CAMERA                        (KEY_REPEATED | KEY_CAMREA)
#define     MSG_KEYREPEAT_1                             (KEY_REPEATED | KEY_1)            
#define     MSG_KEYREPEAT_2                             (KEY_REPEATED | KEY_2)          
#define     MSG_KEYREPEAT_3                             (KEY_REPEATED | KEY_3)
#define     MSG_KEYREPEAT_4                             (KEY_REPEATED | KEY_4)    
#define     MSG_KEYREPEAT_5                             (KEY_REPEATED | KEY_5)         
#define     MSG_KEYREPEAT_6                             (KEY_REPEATED | KEY_6)      
#define     MSG_KEYREPEAT_7                             (KEY_REPEATED | KEY_7)
#define     MSG_KEYREPEAT_8                             (KEY_REPEATED | KEY_8)
#define     MSG_KEYREPEAT_9                             (KEY_REPEATED | KEY_9)
#define     MSG_KEYREPEAT_STAR                          (KEY_REPEATED | KEY_STAR)
#define     MSG_KEYREPEAT_0                             (KEY_REPEATED | KEY_0)
#define     MSG_KEYREPEAT_HASH                          (KEY_REPEATED | KEY_HASH)
#define     MSG_KEYREPEAT_SPUP                          (KEY_REPEATED | KEY_SPUP)
#define     MSG_KEYREPEAT_SPDW                          (KEY_REPEATED | KEY_SPDW)
#define     MSG_KEYREPEAT_OK                            (KEY_REPEATED | KEY_OK)
#define     MSG_KEYREPEAT_CANCEL                        (KEY_REPEATED | KEY_CANCEL)
#define     MSG_KEYREPEAT_RED                           (KEY_REPEATED | KEY_RED)
#define     MSG_KEYREPEAT_UPSIDE                        (KEY_REPEATED | KEY_UPSIDEKEY)
#define     MSG_KEYREPEAT_DOWNSIDE                      (KEY_REPEATED | KEY_DOWNSIDEKEY)
#define     MSG_KEYREPEAT_WEB                           (KEY_REPEATED | KEY_WEB)
#define     MSG_KEYREPEAT_GPIO_SIG1                     (KEY_REPEATED | KEY_GPIO_SIG1)      
#define     MSG_KEYREPEAT_GPIO_SIG2                     (KEY_REPEATED | KEY_GPIO_SIG2)      
#define     MSG_KEYREPEAT_FLIP                          (KEY_REPEATED | KEY_FLIP)           
#define     MSG_KEYREPEAT_HEADSET_BUTTON                (KEY_REPEATED | KEY_HEADSET_BUTTIN) 
#define     MSG_KEYREPEAT_HEADSET_DETECT                (KEY_REPEATED | KEY_HEADSET_DETECT) 
#define     MSG_KEYREPEAT_SD_DETECT                     (KEY_REPEATED | KEY_SDCARD_DETECT)  
#define     MSG_KEYREPEAT_VIDEO_TEL                     (KEY_REPEATED | KEY_VIDEO_TEL)
#define     MSG_KEYREPEAT_PLAYANDSTOP                   (KEY_REPEATED | KEY_PLAYANDSTOP)
#define     MSG_KEYREPEAT_FORWARD                       (KEY_REPEATED | KEY_FORWARD)
#define     MSG_KEYREPEAT_BACKWARD                      (KEY_REPEATED | KEY_BACKWARD)
#define     MSG_KEYREPEAT_MIDDLE                        (KEY_REPEATED | KEY_MIDDLE)

// QWERT_ADD
#define     MSG_KEYREPEAT_AT                            (KEY_REPEATED | KEY_AT)

#define     MSG_KEYREPEAT_Q                             (KEY_REPEATED | KEY_Q)
#define     MSG_KEYREPEAT_W                             (KEY_REPEATED | KEY_W)
#define     MSG_KEYREPEAT_E                             (KEY_REPEATED | KEY_E)
#define     MSG_KEYREPEAT_R                             (KEY_REPEATED | KEY_R)
#define     MSG_KEYREPEAT_T                             (KEY_REPEATED | KEY_T)
#define     MSG_KEYREPEAT_Y                             (KEY_REPEATED | KEY_Y)
#define     MSG_KEYREPEAT_U                             (KEY_REPEATED | KEY_U)
#define     MSG_KEYREPEAT_I                             (KEY_REPEATED | KEY_I)
#define     MSG_KEYREPEAT_O                             (KEY_REPEATED | KEY_O)
#define     MSG_KEYREPEAT_P                             (KEY_REPEATED | KEY_P)
#define     MSG_KEYREPEAT_A                             (KEY_REPEATED | KEY_A)
#define     MSG_KEYREPEAT_S                             (KEY_REPEATED | KEY_S)
#define     MSG_KEYREPEAT_D                             (KEY_REPEATED | KEY_D)
#define     MSG_KEYREPEAT_F                             (KEY_REPEATED | KEY_F)
#define     MSG_KEYREPEAT_G                             (KEY_REPEATED | KEY_G)
#define     MSG_KEYREPEAT_H                             (KEY_REPEATED | KEY_H)
#define     MSG_KEYREPEAT_J                             (KEY_REPEATED | KEY_J)
#define     MSG_KEYREPEAT_K                             (KEY_REPEATED | KEY_K)
#define     MSG_KEYREPEAT_L                             (KEY_REPEATED | KEY_L)
#define     MSG_KEYREPEAT_DEL                           (KEY_REPEATED | KEY_DEL)
#define     MSG_KEYREPEAT_Z                             (KEY_REPEATED | KEY_Z)
#define     MSG_KEYREPEAT_X                             (KEY_REPEATED | KEY_X)
#define     MSG_KEYREPEAT_C                             (KEY_REPEATED | KEY_C)
#define     MSG_KEYREPEAT_V                             (KEY_REPEATED | KEY_V)
#define     MSG_KEYREPEAT_B                             (KEY_REPEATED | KEY_B)
#define     MSG_KEYREPEAT_N                             (KEY_REPEATED | KEY_N)
#define     MSG_KEYREPEAT_M                             (KEY_REPEATED | KEY_M)
#define     MSG_KEYREPEAT_COMMA                         (KEY_REPEATED | KEY_COMMA)
#define     MSG_KEYREPEAT_PERIOD                        (KEY_REPEATED | KEY_PERIOD)
#define     MSG_KEYREPEAT_ENTER                         (KEY_REPEATED | KEY_ENTER)
#define     MSG_KEYREPEAT_FN                            (KEY_REPEATED | KEY_FN)
#define     MSG_KEYREPEAT_SHIFT                         (KEY_REPEATED | KEY_SHIFT)
#define     MSG_KEYREPEAT_AT_QWERTY                     (KEY_REPEATED | KEY_AT_QWERTY)
#define     MSG_KEYREPEAT_SPACE                         (KEY_REPEATED | KEY_SPACE)
#define     MSG_KEYREPEAT_AND                           (KEY_REPEATED | KEY_AND)
#define     MSG_KEYREPEAT_QUESTION                      (KEY_REPEATED | KEY_QUESTION)
#define     MSG_KEYREPEAT_CTRL                          (KEY_REPEATED | KEY_CTRL)

#define     MSG_KEYREPEAT_PLUS                          (KEY_REPEATED | KEY_PLUS)
#define     MSG_KEYREPEAT_LPARENTHESIS                  (KEY_REPEATED | KEY_LEFT_PARENTHESIS)
#define     MSG_KEYREPEAT_RPARENTHESIS                  (KEY_REPEATED | KEY_RIGHT_PARENTHESIS)
#define     MSG_KEYREPEAT_MINUS                         (KEY_REPEATED | KEY_MINUS)
#define     MSG_KEYREPEAT_DQUOTES                       (KEY_REPEATED | KEY_DOUBLE_QUOTES)
#define     MSG_KEYREPEAT_SEMICOLON                     (KEY_REPEATED | KEY_SEMICOLON)
#define     MSG_KEYREPEAT_COLON                         (KEY_REPEATED | KEY_COLON)
#define     MSG_KEYREPEAT_SLASH                         (KEY_REPEATED | KEY_SLASH)
#define     MSG_KEYREPEAT_SAND                          (KEY_REPEATED | KEY_SHIFT_AND)
#define     MSG_KEYREPEAT_EXCLAMATION                   (KEY_REPEATED | KEY_EXCLAMATION)

// QWERT_ADD

#define     MSG_KEYREPEAT_TV                            (KEY_REPEATED | KEY_TV)
#define     MSG_KEYREPEAT_CALL1                         (KEY_REPEATED | KEY_GREEN)
#define     MSG_KEYREPEAT_CALL2                         (KEY_REPEATED | KEY_CALL2)
#define     MSG_KEYREPEAT_CALL3                         (KEY_REPEATED | KEY_CALL3)
#define     MSG_KEYREPEAT_CALL4                         (KEY_REPEATED | KEY_CALL4)
#define     MSG_KEYREPEAT_MP3                           (KEY_REPEATED | KEY_MP3)
#define     MSG_KEYREPEAT_NOTES                         (KEY_REPEATED | KEY_NOTES)
#define     MSG_KEYREPEAT_SMS                           (KEY_REPEATED | KEY_SMS)
#define     MSG_KEYREPEAT_CALENDER                      (KEY_REPEATED | KEY_CALENDER)
#define     MSG_KEYREPEAT_IE                            (KEY_REPEATED | KEY_IE)
#define     MSG_KEYREPEAT_HANG                          (KEY_REPEATED | KEY_HANG)
#define     MSG_KEYREPEAT_VOL_UP                        (KEY_REPEATED | KEY_VOL_UP)
#define     MSG_KEYREPEAT_VOL_DOWN                      (KEY_REPEATED | KEY_VOL_DOWN)
#define     MSG_KEYREPEAT_MO                            (KEY_REPEATED | KEY_MO)

#define     MSG_KEYREPEAT_POWER                         (KEY_REPEATED | KEY_POWER) 
#define     MSG_KEYREPEAT_MENU                          (KEY_REPEATED | KEY_MENU)
#ifdef SPRT_PRJ_YA855	// wy@20130522
#define     MSG_KEYREPEAT_SRAECH                            (KEY_REPEATED | KEY_SRAECH)
#endif


#define     MSG_KEYREPEAT_MAX_NUM                       (KEY_REPEATED | KEY_MAX_NUM) 

/*define the kernel message from 0xf000~0xf9ff*/
#define     MSG_KERNEL_START                            0xf000
//tp
#define     MSG_TP_PRESS                                MSG_KERNEL_START          // press the touch panel
#define     MSG_TP_PRESS_DOWN                           (MSG_TP_PRESS + 0x01)     // press down the touch panel 
#define     MSG_TP_PRESS_UP                             (MSG_TP_PRESS + 0x02)     // press up the touch panel 
#define     MSG_TP_PRESS_MOVE                           (MSG_TP_PRESS + 0x03)     // press move
#define     MSG_TP_PRESS_SHORT                          (MSG_TP_PRESS + 0x04)     // press short long
#define     MSG_TP_PRESS_LONG                           (MSG_TP_PRESS + 0x05)     // press long
#define     MSG_TP_PRESS_DOUBLE                         (MSG_TP_PRESS + 0x06)     // press double
#define     MSG_TP_PRESS_DRAG                           (MSG_TP_PRESS + 0x07)     // press drag
#define     MSG_TP_GESTURE                              (MSG_TP_PRESS + 0x08)
#define     MSG_TP_PRESS_DBLCLK_UP                      (MSG_TP_PRESS + 0x09)     // dblclk up	

#ifdef GUI_CTRL_SCROLL_KEY
#define     MSG_TP_LSKOK                                (MSG_TP_PRESS + 0x09)      // press the touch panel long
#define     MSG_TP_RSKOK                                (MSG_TP_PRESS + 0x0a)
#endif
//new tp message add here...

//applet
#define     MSG_UPDATE_SCREEN                           (MSG_KERNEL_START + 0x10)
#define     MSG_APPLET_START                            (MSG_KERNEL_START + 0x11)
#define     MSG_APPLET_STOP                             (MSG_KERNEL_START + 0x12)
#define     MSG_APPLET_SUSPEND                          (MSG_KERNEL_START + 0x13)
#define     MSG_APPLET_RESUME                           (MSG_KERNEL_START + 0x14)
#define     MSG_APPLET_SWITCH                           (MSG_KERNEL_START + 0x15)  //用户主动切换到applet
#define     MSG_APPLET_CLEAR_FREE_MODULE                (MSG_KERNEL_START + 0x16)
#define     MSG_APPLET_RESOLVE_CONFLICT                 (MSG_KERNEL_START + 0x17)
//new applet message add here...

//timer
#define     MSG_TIMER                                   (MSG_KERNEL_START + 0x20)

//window
#define     MSG_OPEN_WINDOW                             (MSG_KERNEL_START + 0x21)        
#define     MSG_CLOSE_WINDOW                            (MSG_KERNEL_START + 0x22)        
#define     MSG_LOSE_FOCUS                              (MSG_KERNEL_START + 0x23)        
#define     MSG_GET_FOCUS                               (MSG_KERNEL_START + 0x24)        
#define     MSG_FULL_PAINT                              (MSG_KERNEL_START + 0x25)
#define     MSG_LCD_SWITCH                              (MSG_KERNEL_START + 0x26)
#define     MSG_PRE_FULL_PAINT                          (MSG_KERNEL_START + 0x27)
#define     MSG_END_FULL_PAINT                          (MSG_KERNEL_START + 0x28)
#define     MSG_PRE_LCD_SWITCH                          (MSG_KERNEL_START + 0x29)

//message box
#define     MSG_MESSAGEBOX_OK                           (MSG_KERNEL_START + 0x2a)
#define     MSG_MESSAGEBOX_CANCEL                       (MSG_KERNEL_START + 0x2b)
#define     MSG_SD_PLUG_OUT                             (MSG_KERNEL_START + 0x2c)
//new window message add here...

//control message
#define     MSG_CTL_OPEN                                (MSG_KERNEL_START + 0x30)
#define     MSG_CTL_CLOSE                               (MSG_KERNEL_START + 0x31)
#define     MSG_CTL_GET_ACTIVE                          (MSG_KERNEL_START + 0x32)    
#define     MSG_CTL_LOSE_ACTIVE                         (MSG_KERNEL_START + 0x33)
#define     MSG_CTL_LOSE_FOCUS                          (MSG_KERNEL_START + 0x34)
#define     MSG_CTL_GET_FOCUS                           (MSG_KERNEL_START + 0x35)
#define     MSG_CTL_PAINT                               (MSG_KERNEL_START + 0x36)

#define     MSG_GSENSOR                                 (MSG_KERNEL_START + 0x40)

// backlight
#define     MSG_BACKLIGHT_TURN_ON                       (MSG_KERNEL_START + 0x41)
#define     MSG_BACKLIGHT_TURN_OFF                      (MSG_KERNEL_START + 0x42)

#define		MSG_KEY_CLICK								(MSG_KERNEL_START + 0x44)
#define		MSG_KEY_DBLCLK								(MSG_KERNEL_START + 0x45)

#define     MSG_ASYN_SOCKET_READ_IND                    (MSG_KERNEL_START + 0x100)
#define     MSG_ASYN_SOCKET_WRITE_IND                   (MSG_KERNEL_START + 0x101)
#define     MSG_ASYN_SOCKET_CONNECT_IND                 (MSG_KERNEL_START + 0x102)
#define     MSG_ASYN_SOCKET_CLOSE_IND                   (MSG_KERNEL_START + 0x103)
#define     MSG_ASYN_SOCKET_ACCEPT_IND                  (MSG_KERNEL_START + 0x104)

//added by andrew.zhang at 2009/03/13 for caf
#define     MSG_CTL_PROPERTY_CHANGE                     (MSG_KERNEL_START + 0x110)  //控件属性改变时发送该消息通知控件//2011-9-14修改与MSG_GSENSOR值重复

//define by Riancy.zhang 2009-03-11
#define     MSG_DATA_READ                               (MSG_KERNEL_START + 0xf00)  /*数据被读取消息*/
#define     MSG_DATA_WRITED                             (MSG_KERNEL_START + 0xf01)  /*数据被写入消息*/
#define     MSG_MEDIA_STOP                              (MSG_KERNEL_START + 0xf02)  /*媒体停止消息*/

/*define the notify message from 0xe000~0xefff*/
#define     MSG_NOTIFY_START                            0xe000
#define     MSG_NOTIFY_OK                               (MSG_NOTIFY_START + 0x001)
#define     MSG_NOTIFY_CANCEL                           (MSG_NOTIFY_START + 0x002)
#define     MSG_NOTIFY_PENOK                            (MSG_NOTIFY_START + 0x003)
#define     MSG_NOTIFY_MIDSK                            (MSG_NOTIFY_START + 0x004)
#define     MSG_NOTIFY_PENLONGOK                        (MSG_NOTIFY_START + 0x005)

/*
   notify消息开放的原则:
   1. 该消息设计的比较合理
   2. 该消息对应的notify消息结构, 必须包含CAF_NOTIFY_T的基类结构, 并定义在对应控件的cafctrlxxx.h中
*/
//list notify
#define     MSG_NOTIFY_LIST_PREPAGE                     (MSG_NOTIFY_START + 0x010)
#define     MSG_NOTIFY_LIST_NXTPAGE                     (MSG_NOTIFY_START + 0x011)
#define     MSG_NOTIFY_LIST_MOVEBOTTOM                  (MSG_NOTIFY_START + 0x012)
#define     MSG_NOTIFY_LIST_MOVETOP                     (MSG_NOTIFY_START + 0x013)
#define     MSG_NOTIFY_LIST_MOVEDOWN                    (MSG_NOTIFY_START + 0x014)
#define     MSG_NOTIFY_LIST_MOVEUP                      (MSG_NOTIFY_START + 0x015)
#define     MSG_NOTIFY_LIST_ENTER                       (MSG_NOTIFY_START + 0x016)
#define     MSG_NOTIFY_LIST_GET_EFFECT_STR              (MSG_NOTIFY_START + 0x017)
#define     MSG_NOTIFY_LIST_HEAD                        (MSG_NOTIFY_START + 0x018)
#define     MSG_NOTIFY_LIST_TAIL                        (MSG_NOTIFY_START + 0x019)
#define     MSG_NOTIFY_LIST_NEED_ITEM_DATA              (MSG_NOTIFY_START + 0x01a)
#define     MSG_NOTIFY_LIST_NEED_ITEM_CONTENT           (MSG_NOTIFY_START + 0x01b)
#define     MSG_NOTIFY_LIST_SELECTEDALL                 (MSG_NOTIFY_START + 0x01c)
#define     MSG_NOTIFY_LIST_MARK_ITEM                   (MSG_NOTIFY_START + 0x01d)
#define     MSG_NOTIFY_LIST_ANIM_DISPLAY_IND            (MSG_NOTIFY_START + 0x01e)
#define     MSG_NOTIFY_LIST_SLIDE_STATE_CHANGE          (MSG_NOTIFY_START + 0x01f)
#define     MSG_NOTIFY_LIST_LONGOK                      (MSG_NOTIFY_START + 0x020)
#define     MSG_NOTIFY_LIST_CHECK_CONTENT               (MSG_NOTIFY_START + 0x021)
#define     MSG_NOTIFY_LIST_ADD_CONTEN                  (MSG_NOTIFY_START + 0x022)
#define     MSG_NOTIFY_LIST_DEL_CONTEN                  (MSG_NOTIFY_START + 0x023)
#define     MSG_NOTIFY_LIST_SET_SELECT                  (MSG_NOTIFY_START + 0x024)
#define     MSG_NOTIFY_LIST_SELECT_QUERY                (MSG_NOTIFY_START + 0x025)
#define     MSG_NOTIFY_LIST_CHECKED						(MSG_NOTIFY_START + 0x026)

//edit notify
#define     MSG_NOTIFY_EDITBOX_UPDATE_STRNUM            (MSG_NOTIFY_START + 0x030)
#define     MSG_NOTIFY_EDITBOX_MAXTEXT                  (MSG_NOTIFY_START + 0x031)
#define     MSG_NOTIFY_EDITBOX_PICKER_SELECTED          (MSG_NOTIFY_START + 0x032)

//iconlist notify
#define     MSG_NOTIFY_ICONLIST_APPEND_TEXT             (MSG_NOTIFY_START + 0x040)  //未包含CAF_NOTIFY_T结构!!!
#define     MSG_NOTIFY_ICONLIST_APPEND_ICON             (MSG_NOTIFY_START + 0x041)  //未包含CAF_NOTIFY_T结构!!!
#define     MSG_NOTIFY_ICONLIST_ICON_NUM                (MSG_NOTIFY_START + 0x042)  //未包含CAF_NOTIFY_T结构!!!
#define     MSG_NOTIFY_ICONLIST_TPLONG                  (MSG_NOTIFY_START + 0x043)  //未包含CAF_NOTIFY_T结构!!!
//icon folder notify
#define     MSG_NOTIFY_ICONFOLDER_APPEND_ICON           (MSG_NOTIFY_START + 0x044)

//drop downlist notify
#define     MSG_NOTIFY_DROPDOWNLIST_SELECTED            (MSG_NOTIFY_START + 0x050)
#define     MSG_NOTIFY_DROPDOWNLIST_PRE_PROCESS         (MSG_NOTIFY_START + 0x051)

//form notify
#define     MSG_NOTIFY_FORM_SWITCH_ACTIVE               (MSG_NOTIFY_START + 0x060)

//anim notify
#define     MSG_NOTIFY_ANIM_DISPLAY_IND                 (MSG_NOTIFY_START + 0x070)
#define     MSG_NOTIFY_ANIM_END_IND                     (MSG_NOTIFY_START + 0x071)
#define     MSG_NOTIFY_ANIM_GIF_UPDATE                  (MSG_NOTIFY_START + 0x072)
#define     MSG_NOTIFY_ANIM_DISPLAY                     (MSG_NOTIFY_START + 0x073)

//button tp press notify
#define     MSG_NOTIFY_BUTTON_DOWN                      (MSG_NOTIFY_START + 0x081)
#define     MSG_NOTIFY_BUTTON_UP                        (MSG_NOTIFY_START + 0x082)

//prg notify
#define     MSG_NOTIFY_PRGBOX_MOVEUP_ONE                (MSG_NOTIFY_START + 0x090)
#define     MSG_NOTIFY_PRGBOX_MOVEDOWN_ONE              (MSG_NOTIFY_START + 0x091)
#define     MSG_NOTIFY_PRGBOX_MOVEUP_PAGE               (MSG_NOTIFY_START + 0x092)
#define     MSG_NOTIFY_PRGBOX_MOVEDOWN_PAGE             (MSG_NOTIFY_START + 0x093)
#define     MSG_NOTIFY_PRGBOX_MOVE                      (MSG_NOTIFY_START + 0x094)
#define     MSG_NOTIFY_PRGBOX_CLICK                     (MSG_NOTIFY_START + 0x095)

//tab notify
#define     MSG_NOTIFY_TAB_SWITCH                       (MSG_NOTIFY_START + 0x0a0)  /*!<the msg to switch item>*/
#define     MSG_NOTIFY_TAB_START                        (MSG_NOTIFY_START + 0x0a1)  /*!<to the original item>*/
#define     MSG_NOTIFY_TAB_END                          (MSG_NOTIFY_START + 0x0a2)  /*!<to the terminal item>*/
#define     MSG_NOTIFY_TAB_NEED_ITEM_CONTENT            (MSG_NOTIFY_START + 0x0a3)  /*!<item need content, while tab ctrl drawing>*/
#define     MSG_NOTIFY_TAB_ANIM_DISPLAY_IND             (MSG_NOTIFY_START + 0x0a4)
#define     MSG_NOTIFY_TAB_PAINTED                      (MSG_NOTIFY_START + 0x0a5)  //tab控件更新之后通知父控件

// text notify   
#define     MSG_NOTIFY_TEXT_END_LINE                    (MSG_NOTIFY_START + 0x0b0)  /*!<to the terminal item>*/
#define     MSG_NOTIFY_TEXT_SCROLL                      (MSG_NOTIFY_START + 0x0b1) 

//rich text notify    
#define     MSG_NOTIFY_RICHTEXT_SWITCHFOCUS_BY_KEY      (MSG_NOTIFY_START + 0x0c0)  //按键导致焦点切换
#define     MSG_NOTIFY_RICHTEXT_SWITCHFOCUS_BY_TP       (MSG_NOTIFY_START + 0x0c1)  //触笔焦点切换

// title msg
#define     MSG_NOTIFY_TITLE_MOVE_NEXT                  (MSG_NOTIFY_START + 0x0d0)
#define     MSG_NOTIFY_TITLE_MOVE_PREV                  (MSG_NOTIFY_START + 0x0d1)
//Title Button 
#define     MSG_NOTIFY_TITLE_RETURN_ICON                (MSG_NOTIFY_START + 0x0d2)
#define     MSG_NOTIFY_TITLE_MENU_ICON                  (MSG_NOTIFY_START + 0x0d3)

// tips msg
#define     MSG_NOTIFY_TIPS_NEED_DATA                   (MSG_NOTIFY_START + 0x0e0)

// setting list
#define     MSG_NOTIFY_SETLIST_SWITCH                   (MSG_NOTIFY_START + 0x0f0)
#define     MSG_NOTIFY_SETLIST_OPENWIN                  (MSG_NOTIFY_START + 0x0f1)

// status bar
#define     MSG_NOTIFY_STATUSBAR_PAINT                  (MSG_NOTIFY_START + 0x100)
#define     MSG_NOTIFY_STATUSBAR_PAINT_END              (MSG_NOTIFY_START + 0x101)


/*********************************************************************************/
/*define the user message from 0x80000000*/
#define     MSG_USER_START                              0x80000000