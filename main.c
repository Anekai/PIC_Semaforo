#include <main.h>

// Programa que automatiza um semáforo com 3 LEDs
// Autor: Alexandre Klabunde
// 01/01/2021

void main()
{
   while (true) {
      output_high(pin_b0);
      output_low(pin_b1);
   
      delay_ms(3500);
   
      output_low(pin_b0);
      output_high(pin_b2);
      
      delay_ms(2000);
      
      output_low(pin_b2);
      output_high(pin_b1);
      
      delay_ms(1000);
   }
}
