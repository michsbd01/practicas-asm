#include <16f877A.h>  // Incluye el archivo de cabecera del microcontrolador
#device ADC = 8       // Configura el ADC a 8 bits
#use delay(clock=20MHz, crystal)  // Oscilador externo a 20 MHz

int valorPot;  // Variable para almacenar el valor leído del ADC

void main() {
    set_tris_b(0b00000000);        // Configura el puerto B como salida digital
    setup_adc_ports(all_analog);    // Configura todos los pines del ADC como analógicos
    setup_adc(adc_clock_internal);  // Configura el ADC con el reloj interno

    while(true) {
        set_adc_channel(0);  // Selecciona el canal 0 del ADC (RA0)
        valorPot = read_adc();  // Lee el valor del ADC y lo guarda en valorPot

        // Control de LEDs basado en el valor del ADC y los requisitos de la tabla
        if (valorPot >= 50 && valorPot < 150) {
            output_b(0b00001111);  // Enciende los primeros 4 LEDs
        }
        else if (valorPot >= 150 && valorPot < 200) {
            output_b(0b00000111);  // Enciende los primeros 3 LEDs
        }
        else if (valorPot >= 200 && valorPot < 250) {
            output_b(0b00000011);  // Enciende los primeros 2 LEDs
        }
        else if (valorPot >= 250) {
            output_b(0b00000001);  // Enciende solo el primer LED
        }
        else {
            output_b(0b00000000);  // Apaga todos los LEDs si es menor a 50
        }
    }
}

