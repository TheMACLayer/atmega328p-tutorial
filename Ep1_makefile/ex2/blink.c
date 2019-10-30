#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define LED_PIN 0

#include <avr/io.h>
#include <util/delay.h>



void blink(void){
	PORTB ^= (1 << LED_PIN); // toggles  pin		
	_delay_ms(500); // busy wait, 500ms
}