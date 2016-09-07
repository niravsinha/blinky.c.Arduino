
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    // set all PORTB pins for output
    DDRB = 0xFF;

    for (;;) {
        // toggle PORTB pins
        PORTB ^= 0xFF;
        // wait one second
        _delay_ms(100);
        // toggle PORTB pins
        PORTB ^= 0xFF; 
        // wait one second
        _delay_ms(50);     
        // toggle PORTB pins
        PORTB ^= 0xFF; 
        // wait one second
        _delay_ms(3);
        // toggle PORTB pins
        PORTB ^= 0xFF; 
        // wait one second
        _delay_ms(20);                            
    }
    return 0;
}
