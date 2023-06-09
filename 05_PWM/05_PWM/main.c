/*
 * 05_PWM.c
 *
 * Created: 10.02.2018 14:50:01
 * Author : Joachim
 */ 

// this code sets up counter0 for an 8kHz PWM wave @ 16Mhz Clock


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


int main(void)
{
	uint8_t weite = 0;
	uint8_t richtung = 1;
	DDRD |= (1 << DDD6) | (1 << DDD5);
	// PD6 is now an output
	

	

	OCR0A = 64+128;
	OCR0B = 64;
	// set PWM for 75% duty cycle


	TCCR0A |= (1 << COM0A1);
	// set none-inverting mode

	TCCR0A |= /*(1 << WGM02) | */(1 << WGM01)  | (1 << WGM00);
	// set fast PWM Mode

	TCCR0B |= (1 << CS01);
	// set prescaler to 8 and starts PWM
	
	



	sei();
	while (1)
	{
		OCR0A = 64+128;	
		_delay_ms(200);
		OCR0A = 64;
		_delay_ms(200);
		
	}
}
