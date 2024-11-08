#include <16F877A.h>

#use delay ( clock=20Mhz, crystal )

#define LED PIN_A2
#define BOTON PIN_A3

void main ( void ) {
    set_tris_a ( 0b11111011 );

    while ( 1 ) {
        if ( 0 == input ( BOTON ) ) {
            output_high (LED);
        } else {
            output_low (LED);
        }
    }
}

