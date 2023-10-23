#include <16f877a.h>
#fuses xt,nowdt
#use delay (clock=10MHZ)
#include <math.h>
#include <lcd.c>

int x[8], p0, p1, p2, p3, p4, p5, p6, p7;

void main()
{
   //configuración del microcontrolador
      lcd_init ();
      set_tris_a(0b000000);
      set_tris_e(0b000);
      
   //programa o proceso
   while(true)
   {
     long sum=0;
     x[0] = p0=input(PIN_A0);
     x[1] = p1=input(PIN_A1);
     x[2] = p2=input(PIN_A2);
     x[3] = p3=input(PIN_A3);
     x[4] = p4=input(PIN_A4);
     x[5] = p5=input(PIN_A5);
     x[6] = p6=input(PIN_E0);
     x[7] = p7=input(PIN_E1);
     
     for(int i=0; i<8; i++)
     {
        if(x[i]==1)
           sum+=pow(2,i);
     }
    
     printf(lcd_putc, "Numero = %ld", sum);
     delay_ms(50);
     lcd_putc("\f");  
   }
}
