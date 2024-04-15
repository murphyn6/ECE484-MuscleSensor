
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#include "lib/HD44780.h"

#define TRIGPOINT 100

int main(void){
	LCD_Setup();

	DDRD = 0b00000001;
	DDRC = 0b00000000;
	ADMUX = 0b01100000;
	ADCSRA = 0b10000111;
    while (1) {
		ADCSRA = ADCSRA | (1 << ADSC);

		while(ADCSRA & (1 << ADSC));


		if (ADCH > TRIGPOINT) {
			PORTD |= _BV(PORTD7);
			LCD_Clear();
			LCD_GotoXY(0, 0);
			LCD_PrintString("Value: ");
			LCD_PrintInteger(ADCH);
			_delay_ms(250);
		}
		else {
			PORTD &= ~_BV(PORTD7);
		}
	}
}
