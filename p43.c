#include <16F877A.h>
#use delay(clock=16MHz, crystal)
int LEDS1;
int LEDS2;
int tiempo=500;


#define Boton1 PIN_A2
#define Boton2 PIN_A3
#define Boton3 PIN_A4


void main (void) {
    set_tris_a(0b00000111); // Configura el puerto A como entrada para los tres botones
    set_tris_b(0b00000000); // Configura el puerto B como salida
    output_b(0x00);

    while(1) {
        if(1 == input(Boton1)) {
            for(int f1 = 0; f1 < 5; f1++) {
                LEDS1 = 0x80;
            output_b(0b00000001);
            delay_ms(tiempo);
            output_b(0b00000010);
            delay_ms(tiempo);
            output_b(0b00000100);
            delay_ms(tiempo);
            output_b(0b00001000);
            delay_ms(tiempo);
            output_b(0b00010000);
            delay_ms(tiempo);
            output_b(0b00100000);
            delay_ms(tiempo);
            output_b(0b010000000);
            delay_ms(tiempo);
            output_b(0b100000000);
            delay_ms(tiempo);
                }
            }
        

        if(1 == input(Boton2)) {
            for(int f2 = 0; f2 < 5; f2++) {
                LEDS2 = 0x01;
                output_b(0b100000000);
            delay_ms(tiempo);
            output_b(0b01000000);
            delay_ms(tiempo);
            output_b(0b001000000);
            delay_ms(tiempo);
            output_b(0b00010000);
            delay_ms(tiempo);
            output_b(0b00001000);
            delay_ms(tiempo);
            output_b(0b000000100);
            delay_ms(tiempo);
            output_b(0b00000010);
            delay_ms(tiempo);
            output_b(0b000000001);
            delay_ms(tiempo);
           
                
                
            }  
        }

        if(1 == input(Boton3)) {
         for(int f2 = 0; f2 < 5; f2++) {
            output_b(0b10000001);
            delay_ms(tiempo);
            output_b(0b01000010);
            delay_ms(tiempo);
            output_b(0b00100100);
            delay_ms(tiempo);
            output_b(0b00011000);
            delay_ms(tiempo);
        }
        }
    }}
    
    
