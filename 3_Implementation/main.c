/**
 * @file main.c
 * @author Shrinath Dawari
 * @brief Smart Water Level Management System
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <avr/io.h>
#include"led.h"
#include"lcd.h"
#include"display.h"
#include<util/delay.h>

int main(void)
{
    LCD_INIT();
    while(1)
    {
        LED(); 
        LCD(); 
        DISPLAY(); 
    }
  return 0;
}
