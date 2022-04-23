/**
 * @file lcd.h
 * @author Shrinath Dawari
 * @brief LCD
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __LCD_H__
#define __LCD_H__

#include <util/delay.h>

#define LCD_DIRECTION  DDRB 	/* Define LCD data port direction */
#define PORT_B PORTB			/* Define LCD data port */
#define LCD_RS PB2				/* Define Register Select pin */
#define LCD_EN PB3 				/* Define Enable signal pin */

void LCD_CMD( unsigned char command );
void LCD_CHAR_WISE( unsigned char ch );
void LCD_INIT(void);
void LCD_DISPLAY (char *temperature_value);
void CLEAR_LCD();

void LCD(void);
void InitADC(void);
uint16_t ReadADC(uint8_t ch);

#endif // __LCD_H__
