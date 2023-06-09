// This code waits for a character and transmits the character back (with interrupts)


#include <avr/io.h>
#include <stdint.h>                     // needed for uint8_t
//#include <stdlib.h>
#include <avr/interrupt.h>

#include "usart.h"






void doIt(char c) { // 1000
	
	usart_sendChar(c);
}

void bar(char c)  {
	
}
double add(double a, double b)
{
	return a + b;
}

int main( void )
{
	
	usart_Init(doIt); // adresse 1000 wird übergeben (nur Point auf Funktion)
	usart_sendStringNewLine("Hallo Welt");
	while(1)
	{
		;                                      // Main loop
	}
}

