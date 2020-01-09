#define F_CPU 16000000UL
#include <avr/io.h>

int main(void){
	//Set pin registers as output (DDxn-->DDRx)
	               //        7654_3210
	DDRB |= 0x3F;  // binary xx11_1111
	DDRC |= 0x3F;  // binary xx11_1111
	DDRD |= 0xFF;  // binary 1111_1111

	//Set outputs High  (PORTxn -->PORTx)

	PORTB |= 0x3F;  // binary xx11_1111
	PORTC |= 0x3F;  // binary xx11_1111
	PORTD |= 0xFF;  // binary 1111_1111

	//Infinite loop
	while(1){

	}
	return 0;
}