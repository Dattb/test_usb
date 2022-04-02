/*
 * key_board.h
 *
 *  Created on: Mar 24, 2022
 *      Author: PC5
 */



enum{
	ENTER,
	SPACE,
	ESCAPE,
};
#ifndef SRC_KEY_BOARD_H_
#define SRC_KEY_BOARD_H_

#define Keyboard_a					0x04
#define Keyboard_b 					0x05
#define Keyboard_c	 				0x06
#define Keyboard_d 					0x07
#define Keyboard_e					0x08
#define Keyboard_f 					0x09
#define Keyboard_g 					0x0A
#define Keyboard_h	 				0x0B
#define Keyboard_i	 				0x0C
#define Keyboard_j					0x0D
#define Keyboard_k					0x0E
#define Keyboard_l					0x0F
#define Keyboard_m 					0x10
#define Keyboard_n					0x11
#define Keyboard_o					0x12
#define Keyboard_p 					0x13
#define Keyboard_q 					0x14
#define Keyboard_r 					0x15
#define Keyboard_s 					0x16
#define Keyboard_t 					0x17
#define Keyboard_u				 	0x18
#define Keyboard_v 					0x19
#define Keyboard_w 					0x1A
#define Keyboard_x 					0x1B
#define Keyboard_y 					0x1C
#define Keyboard_z 					0x1D
#define Keyboard_1 					0x1E
#define Keyboard_2 					0x1F
#define Keyboard_3 					0x20
#define Keyboard_4 					0x21
#define Keyboard_5				 	0x22
#define Keyboard_6				 	0x23
#define Keyboard_7				 	0x24
#define Keyboard_8 					0x25
#define Keyboard_9 					0x26
#define Keyboard_0 					0x27
#define Keyboard_ENTER 				0x28
#define Keyboard_ESCAPE 			0x29
#define Keyboard_DELETE 			0x2A
#define Keyboard_Tab 				0x2B
#define Keyboard_SPACE				0x2C
#define Keyboard_Sub_and_underscore 0x2D
#define Keyboard_equal_and_plus 	0x2E



typedef struct
{
	uint8_t MODIFIER;
	uint8_t RESERVED;
	uint8_t KEYCODE1;
	uint8_t KEYCODE2;
	uint8_t KEYCODE3;
	uint8_t KEYCODE4;
	uint8_t KEYCODE5;
	uint8_t KEYCODE6;
} keyboardHID;


//#define Keyboard_and { 2F
//#define Keyboard_ ] and } 30
//#define Keyboard_ \ and | 31
//#define Keyboard_ Non-US # and ~ 32
//#define Keyboard_ ; and : 33
//#define Keyboard_ ‘ and “ 34
// 35 #define Keyboard_ Grave Accent and Tilde
// 36 #define Keyboard_, and <
// 37 #define Keyboard_ . and >
// 38 #define Keyboard_ / and ?
// 39 #define Keyboard_ Caps Lock
// 3A #define Keyboard_ F1
// 3B #define Keyboard_ F2
// 3C #define Keyboard_ F3
// 3D #define Keyboard_ F4
// 3E #define Keyboard_ F5
// 3F #define Keyboard_ F6
// 40 #define Keyboard_ F7
// 41 #define Keyboard_ F8
// 42 #define Keyboard_ F9
// 43 #define Keyboard_ F10
// 44 #define Keyboard_ F11
// 45 #define Keyboard_ F12
// 46 #define Keyboard_ PrintScree
// 47 #define Keyboard_ Scroll Lock
// 48 #define Keyboard_ Pause
// 49 #define Keyboard_ Insert
// 4A #define Keyboard_ Home
// 4B #define Keyboard_ PageUp
// 4C #define Keyboard_ Delete Forward
// 4D #define Keyboard_ End
// 4E #define Keyboard_ PageDown
// 4F #define Keyboard_ RightArrow
// 50 #define Keyboard_ LeftArrow
// 51 #define Keyboard_ DownArrow
// 52 #define Keyboard_ UpArrow
// 53 Keypad Num Lock and Clear
// 54 Keypad /
// 55 Keypad *
// 56 Keypad -
// 57 Keypad +
// 58 Keypad ENTER
// 59 Keypad 1 and End
// 5A Keypad 2 and Down Arrow
// 5B Keypad 3 and PageDn
// 5C Keypad 4 and Left Arrow
// 5D Keypad 5
// 5E Keypad 6 and Right Arrow
// 5F Keypad 7 and Home
// 60 Keypad 8 and Up Arrow
// 61 Keypad 9 and PageUp
// 62 Keypad 0 and Insert
// 63 Keypad . and Delete
//100 64 #define Keyboard_ Non-US \ and |
//101 65 #define Keyboard_ Application 10 129 √ √ 104
//102 66 #define Keyboard_ Power 9 √ √
//103 67 Keypad = √
//104 68 #define Keyboard_ F13 √
//105 69 #define Keyboard_ F14 √
//106 6A #define Keyboard_ F15 √
//107 6B #define Keyboard_ F16
//108 6C #define Keyboard_ F17
//109 6D #define Keyboard_ F18
//110 6E #define Keyboard_ F19
//111 6F #define Keyboard_ F20
//112 70 #define Keyboard_ F21
//113 71 #define Keyboard_ F22
//114 72 #define Keyboard_ F23
//115 73 #define Keyboard_ F24
//116 74 #define Keyboard_ Execute √
//117 75 #define Keyboard_ Help √
//118 76 #define Keyboard_ Menu √
//119 77 #define Keyboard_ Select √
//120 78 #define Keyboard_ Stop √
//121 79 #define Keyboard_ Again √
//122 7A #define Keyboard_ Undo √
//123 7B #define Keyboard_ Cut √
//124 7C #define Keyboard_ Copy √
//125 7D #define Keyboard_ Paste √
//126 7E #define Keyboard_ Find √
//127 7F #define Keyboard_ Mute √
//128 80 #define Keyboard_ Volume Up √
//129 81 #define Keyboard_ Volume Down √
//130 82 #define Keyboard_ Locking Caps Lock 12 √
//131 83 #define Keyboard_ Locking Num Lock 12 √
//132 84 #define Keyboard_ Locking Scroll Lock 12 √
//133 85 Keyp


#endif /* SRC_KEY_BOARD_H_ */




void key_board_send(unsigned char key,unsigned char delay);
void kb_send_string(unsigned char *p,unsigned char lenght, unsigned char delay);
void heart_print();

void test_modifile();
void heart_2_print();
