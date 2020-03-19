#define F_CPU 16000000UL
#define LED_PIN 0

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRB |= (1 << LED_PIN);      //Define led pin (PBO) as output
	while(1){
		PORTB ^= (1 << LED_PIN);  //Toggle led pin
		_delay_ms(500);
	}
	return 0;
}