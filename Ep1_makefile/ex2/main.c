#define F_CPU 16000000UL
#define LED_PIN 0

#include <avr/io.h>
#include <util/delay.h>
#include "blink.h"

int main(void)
{
	DDRB |= (1 << LED_PIN); // set pin as output
    while (1) 
    {
		blink();
    }
    return 1;
}