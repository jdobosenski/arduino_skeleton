
#include <util/delay.h>
#include <avr/io.h>

#define LED PORTB5

int main(void) {
	DDRB |= (1 << LED);
	while(1) {
		PORTB |= (1 << LED);
    	_delay_ms(500);
    	PORTB &= (~(1 << LED));
    	_delay_ms(500);
	}
}

