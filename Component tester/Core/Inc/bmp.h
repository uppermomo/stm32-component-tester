/*
 * bmp.h
 *
 *  Created on: 2024年3月16日
 *      Author: 86158
 */

#ifndef BMP_H_
#define BMP_H_


unsigned char BMP1[] =
{
0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xF0,0x10,0x10,
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
0x10,0xF0,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x04,0x04,
0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
0x04,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"电阻",0*/
/* (48 X 16 )*/

};

unsigned char BMP2[] =
{
0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0xFC,0x00,0x00,0x00,0x00,0x00,0xFC,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"电容",1*/
/* (48 X 16 )*/

};

unsigned char BMP3[] =
{

0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0x20,
0x20,0xC0,0xC0,0x20,0x20,0xC0,0xC0,0x20,0x20,0xC0,0xC0,0x20,0x20,0xC0,0xC0,0x20,
0x20,0xC0,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"电感",2*/
/* (48 X 16 )*/

};

unsigned char BMP4[] =
{

0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0xFC,0x08,0x10,0x20,0x40,0x80,0xFC,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x1F,0x08,0x04,0x02,0x01,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"二极管",3*/
/* (48 X 16 )*/
};

unsigned char BMP5[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xF0,0x00,0x80,0x40,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0xFF,0x11,0x20,0xC0,0xC0,0x40,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*三极管*/
};

unsigned char BMP6[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0xC0,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0xC0,0xC0,0xC0,
0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,
0x1C,0x0E,0x07,0x73,0x79,0x58,0xC8,0xD8,0xD8,0xD8,0x98,0x90,0xB0,0xB0,0x30,0x30,
0x60,0xE1,0xE1,0xE1,0x01,0x03,0x03,0x03,0x83,0xC6,0xE6,0x7E,0x1C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x0C,0x07,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x03,
0x03,0x83,0xC1,0xE0,0x70,0x38,0x9E,0xE7,0x7F,0x0F,0x03,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0xFE,0xFF,0x03,0xF8,0xF8,0x0C,0x0C,0x0C,0x18,0x18,0x18,0x18,0x30,
0x30,0x30,0x60,0x60,0x60,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0xC0,0xE0,0x70,0x1C,0x8E,
0xC7,0xE3,0x71,0x3C,0x8E,0xC7,0xE3,0x79,0x1C,0x0E,0x07,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x07,0x0E,0x1C,0x3B,0x33,0x36,0x66,0x66,0x6C,0xCC,0xCC,0xD8,
0xD8,0x98,0xB0,0xB0,0x30,0x30,0x60,0x60,0x60,0xC0,0xE1,0x70,0x38,0x9C,0xCE,0xE7,
0x71,0x38,0x1E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x06,0x06,0x06,0x06,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

#endif /* BMP_H_ */
