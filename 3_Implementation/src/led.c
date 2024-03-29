/**
 * @file led.c
 * @author Shrinath Dawari
 * @brief LED
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<avr/io.h>
#include <util/delay.h>
#include"led.h"

void LED()
{
    DDRD &= ~(1<<PD0); //input pin Port D pin 1
    DDRD &= ~(1<<PD1);  //input pin Port D pin 2

    /*Giving logic HIGH for the input pins*/
    PORTD |= (1<<PD0);
    PORTD |= (1<<PD1);

    /*Giving the output @ pin0 Port B */
    DDRD |= (1<<PD2);

    if  ( (!(PIND & (1<<PD0))) & (!(PIND & (1<<PD1))) )
    {
        PORTD &= ~(1<<PD2);   //Turns off the LED if both the switches are turned on by the user
        _delay_ms(1000);
    }
    else if  ( ((PIND & (1<<PD0))) & (!(PIND & (1<<PD1))) )
    {
        PORTD &= ~(1<<PD2);   //Turns on the LED if both the switches are turned on by the user
        _delay_ms(1000);
    }
    else
    {
       PORTD |= (1<<PD2);  //Turns Off the LED
        _delay_ms(1000);
    }
}
