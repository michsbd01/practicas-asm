#include<16F877A.h>
#use delay (clock=20Mhz,crystal)

#define Boton PIN_A2

byte contador=0;

void main (void){
   set_tris_b (0b00000000);
   set_tris_a (0b11111111);
   
   
   while(1) {
      if (!input (Boton)){
          contador++;
          output_b (contador);
          Delay_ms(5);
          while (!input(Boton));
          Delay_ms(5);
      }
          if (contador==9){
          contador=0;
          
          }
      
   }
}
