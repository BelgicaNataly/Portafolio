#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=20MHZ)

void main()
{
   // Variables  
   int entrada;
   
   //Configuracion del microcontrolador
   set_tris_a(0b111111);
   //set_tris_b(0b00000000);
   set_tris_c(0b00000000);
   set_tris_d(0b00000000);
   //output_b(0X00);
   output_c(0X00);
   output_d(0X00);

   //Programa o proceso
   while(true)
   {
     entrada=input(PIN_A4);
     if(entrada==1)
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
       output_c(0X10);
       delay_ms(50);
       output_c(0X00);
       delay_ms(50);
       output_d(0X04);
       delay_ms(50);
       output_d(0X00);
       delay_ms(50);
     }
     else  
     {
       output_d(0X80);
       delay_ms(50);
       output_d(0X00);
       delay_ms(50);      
       output_c(0X80);
       delay_ms(50);
       output_c(0X00);
       delay_ms(50);      
       output_c(0X10);
       delay_ms(50);
       output_c(0X00);
       delay_ms(50);
       output_d(0X10);
       delay_ms(50);
       output_d(0X00);
       delay_ms(50);
       output_c(0X20);
       delay_ms(50);
       output_c(0X00);
       delay_ms(50);
       output_d(0X04);
       delay_ms(50);
       output_d(0X00);
       delay_ms(50);
     }
   }
}
