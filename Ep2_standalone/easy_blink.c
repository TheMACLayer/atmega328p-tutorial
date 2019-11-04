#define F_CPU 16000000UL
#define LED_PIN 0

#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
	DDRB |= (1 << LED_PIN); // set pin as output
    while (1) 
    {
		PORTB ^= (1 << LED_PIN); // toggles  pin		
		_delay_ms(500); // busy wait, 500ms
    }
}