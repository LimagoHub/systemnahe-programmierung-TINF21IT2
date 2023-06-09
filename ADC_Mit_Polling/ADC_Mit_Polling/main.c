/*
 * ADC_Mit_Polling.c
 *
 * Created: 17.09.2022 15:26:02
 * Author : JoachimWagner
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include "analog.h"
#include "usart.h"

int main(void)
{
	usart_Init();
	analog_init();
	
    /* Replace with your application code */
    while (1) 
    {
		char sende_buffer[10];
		uint16_t value = analog_read(0);
		itoa(value, sende_buffer, 10);
		usart_sendStringNewLine(sende_buffer);
    }
}

