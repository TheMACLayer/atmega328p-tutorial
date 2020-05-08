#define F_CPU 16000000UL

#include <avr/io.h>

int main(void){
	DDRB   |= (1 << PORTB1);      //Set PB1 as output
	TCCR1A |= (1 << COM1A0);      //Set PB1/OC1A to toggle on timer
	TCCR1B |= (1 << WGM12);       //Set timer CTC mode
	OCR1A   = 31249;              //Set count limit 1 sec @ 16MHz, 256 divisor
	TCCR1B |= (1 << CS12);        //Set 256 clock divisor, count starts
	while(1){
	}
	return 0;
}