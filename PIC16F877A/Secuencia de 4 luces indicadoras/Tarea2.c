#include <16f877a.h> //indica el microcontrolador a usar
#fuses xt,nowdt //tiene un reloj externo
#use delay (clock=20MHZ) //el reloj va atrabajar con 8MHZ

void main()
{
   //variables
   
   //configuración del microcontrolador
      //configuracion de los puertos a, b, c y d como salidas en formato binario
      
      
      set_tris_d(0b00000000);
      set_tris_c(0b00000000);
      output_d(0X00);
      output_c(0X00);
      
   //programa o proceso
   while(true)
   {
         output_d(0X80);
         delay_ms(50);
         output_d(0X00);
         delay_ms(50);
         output_d(0X10);
         delay_ms(50);
         output_d(0X00);
         delay_ms(50);
         output_c(0X80);
         delay_ms(50);
         output_c(0X00);
         delay_ms(50);
         output_c(0X20);
         delay_ms(50);
         output_c(0X00);
         delay_ms(50);
   } 
}
