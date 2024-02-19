#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "can.h"
#include "led.h"
#include "uart.h"
#include "adc.h"
#include "button.h"
#include "counter.h"





int main ()
{
	DDRC = 0xFF;			// LED-Port: output
	PORTC = 0x00;			// LEDs ein
    _delay_ms(2500);
    PORTC = 0xFF;            // LEDs aus
   
	can_init(BITRATE_500_KBPS);      // CAN init 500 kbit/s

	
	
	
	
    
	for (;;)
	{
	
        
	


        
	
	
		_delay_ms(250);
	}
	return 0;
}

