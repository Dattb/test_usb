/*
 * key_board.c
 *
 *  Created on: Mar 24, 2022
 *      Author: Dat Pham
 */

#include "main.h"
#include "usb_device.h"
#include "usbd_hid.h"
#include "key_board.h"
extern USBD_HandleTypeDef hUsbDeviceFS;

unsigned char temp_buff[22]  = "wword\n\n\n\n\n\n\n";

keyboardHID keyboardhid = {0,0,0,0,0,0,0,0};


void heart_print(){
    // set output size
    int size = 10;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y <= 4*size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3*size, 2));

            if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                printf("o");
                unsigned char temp = 'o';
                key_board_send(temp,20);
            }
            else {
                printf(" ");
                unsigned char temp = ' ';
                key_board_send(temp,20);
            }
        }
        printf("\n");
        unsigned char temp = '\n';
        key_board_send(temp,20);
    }

    for (int x = 1; x < 2*size; x++)
    {
        for (int y = 0; y < x; y++) {
            printf(" ");
            unsigned char temp = ' ';
            key_board_send(temp,20);
        }

        for (int y = 0; y < 4*size + 1 - 2*x; y++) {
            printf("o");
            unsigned char temp = 'o';
            key_board_send(temp,20);
        }

        printf("\n");
        unsigned char temp = '\n';
        key_board_send(temp,20);

    }

    return 0;
}

void kb_send_string(unsigned char *p,unsigned char lenght, unsigned char delay){
	for(unsigned char i = 0 ; i<lenght; i++){
		key_board_send(p[i],delay);
	}
}

void key_board_send(unsigned char key,unsigned char delay){
	switch (key){
			case 'a':
			  keyboardhid.KEYCODE1 = Keyboard_a;  // press 'a'
			    break;
			case 'b':
				keyboardhid.KEYCODE1 = Keyboard_b;  // press 'a'
				break;
			case 'c':
				keyboardhid.KEYCODE1 = Keyboard_c;  // press 'a'
				break;
			case 'd':
				keyboardhid.KEYCODE1 = Keyboard_d;  // press 'a'
			    break;
			case 'e':
				keyboardhid.KEYCODE1 = Keyboard_e;  // press 'a'
			    break;
			case 'f':
				keyboardhid.KEYCODE1 = Keyboard_f;  // press 'a'
			    break;
			case 'g':
				keyboardhid.KEYCODE1 = Keyboard_g;  // press 'a'
			    break;
			case 'h':
				keyboardhid.KEYCODE1 = Keyboard_h;  // press 'a'
			    break;
			case 'i':
				keyboardhid.KEYCODE1 = Keyboard_i;  // press 'a'
			    break;
			case 'j':
				keyboardhid.KEYCODE1 = Keyboard_j;  // press 'a'
			    break;
			case 'k':
				keyboardhid.KEYCODE1 = Keyboard_k;  // press 'a'
			    break;
			case 'l':
				keyboardhid.KEYCODE1 = Keyboard_l;  // press 'a'
			    break;
			case 'm':
				keyboardhid.KEYCODE1 = Keyboard_m;  // press 'a'
			    break;
			case 'n':
				keyboardhid.KEYCODE1 = Keyboard_n;  // press 'a'
			    break;
			case 'o':
				keyboardhid.KEYCODE1 = Keyboard_o;  // press 'a'
			    break;
			case 'p':
				keyboardhid.KEYCODE1 = Keyboard_p;  // press 'a'
			    break;
			case 'q':
				keyboardhid.KEYCODE1 = Keyboard_q;  // press 'a'
			    break;
			case 'r':
				keyboardhid.KEYCODE1 = Keyboard_r;  // press 'a'
			    break;
			case 's':
				keyboardhid.KEYCODE1 = Keyboard_s;  // press 'a'
			    break;
			case 't':
				keyboardhid.KEYCODE1 = Keyboard_t;  // press 'a'
			    break;
			case 'u':
				keyboardhid.KEYCODE1 = Keyboard_u;  // press 'a'
			    break;
			case 'v':
				keyboardhid.KEYCODE1 = Keyboard_v;  // press 'a'
			    break;
			case 'w':
				keyboardhid.KEYCODE1 = Keyboard_w;  // press 'a'
			    break;
			case 'x':
				keyboardhid.KEYCODE1 = Keyboard_x;  // press 'a'
			    break;
			case 'y':
				keyboardhid.KEYCODE1 = Keyboard_y;  // press 'a'
			    break;
			case 'z':
				keyboardhid.KEYCODE1 = Keyboard_z;  // press 'a'
			    break;
			case '0':
				keyboardhid.KEYCODE1 = Keyboard_0;  // press 'a'
			    break;
			case '1':
				keyboardhid.KEYCODE1 = Keyboard_1;  // press 'a'
			    break;
			case '2':
				keyboardhid.KEYCODE1 = Keyboard_2;  // press 'a'
			    break;
			case '3':
				keyboardhid.KEYCODE1 = Keyboard_3;  // press 'a'
			    break;
			case '4':
				keyboardhid.KEYCODE1 = Keyboard_4;  // press 'a'
			    break;
			case '5':
				keyboardhid.KEYCODE1 = Keyboard_5;  // press 'a'
			    break;
			case '6':
				keyboardhid.KEYCODE1 = Keyboard_6;  // press 'a'
			    break;
			case '7':
				keyboardhid.KEYCODE1 = Keyboard_7;  // press 'a'
			    break;
			case '8':
				keyboardhid.KEYCODE1 = Keyboard_8;  // press 'a'
			    break;
			case '9':
				keyboardhid.KEYCODE1 = Keyboard_9;  // press 'a'
			    break;
			case '\n':
				keyboardhid.KEYCODE1 = Keyboard_ENTER;  // press 'a'
			    break;
			case ' ':
				keyboardhid.KEYCODE1 = Keyboard_SPACE;  // press 'a'
			    break;
			case 0x7f:
				keyboardhid.KEYCODE1 = Keyboard_DELETE;  // press 'a'
			    break;
			default:
				break;
	}
	  USBD_HID_SendReport(&hUsbDeviceFS, &keyboardhid, sizeof (keyboardhid));
	  HAL_Delay (delay);
	  keyboardhid.KEYCODE1 = 0;  // press 'a'
	  USBD_HID_SendReport(&hUsbDeviceFS, &keyboardhid, sizeof (keyboardhid));
	  HAL_Delay (delay);
}




void test_modifile(){
	  keyboardhid.MODIFIER = 8;
	 // keyboardhid.KEYCODE1 = Keyboard_s;
	  USBD_HID_SendReport(&hUsbDeviceFS, &keyboardhid, sizeof (keyboardhid));
	  HAL_Delay (500);
	  keyboardhid.MODIFIER = 0; // press 'a'
	 // keyboardhid.KEYCODE1 = 0;
	  USBD_HID_SendReport(&hUsbDeviceFS, &keyboardhid, sizeof (keyboardhid));
	  HAL_Delay (500);
	  kb_send_string(temp_buff,12,100);
}




void heart_2_print(){
		int a, b, c;
			printf("Enter size of heart(<20): \n");
			scanf("%d",&c);
		for (a=0; a<c; a++)
		{
			for (b=0; b<=4*c; b++)
			{
				int d = sqrt( pow(a-c,2) + pow(b-c,2) );
				int e = sqrt( pow(a-c,2) + pow(b-3*c,2) );
				if (d < c + 0.5 || e < c +0.5 )
				printf("*");
				else
				printf(" ");
			}
			printf("\n");
		}
		for (a = 1; a <= 2*c; a++)
		{
			for (b=0; b<a; b++)
			printf(" ");
			for (b=0; b<4*c + 1 - 2*a; b++)
			printf("*");
			printf("\n");
		}
}
