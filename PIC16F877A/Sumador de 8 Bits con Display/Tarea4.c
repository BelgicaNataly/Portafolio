#include <16f877a.h> //indica el microcontrolador a usar
#fuses xt,nowdt //tiene un reloj externo
#use delay (clock=20MHZ) //el reloj va atrabajar con 20MHZ
#include <math.h>

BYTE CONST DISPLAY[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x67};
int u, d, x[8], p0, p1, p2, p3, p4, p5, p6, p7;

void main()
{
   //configuración del microcontrolador
      //entradas
      set_tris_a(0X1F);
      set_tris_e(0X1F);
      
      //salidas
      set_tris_b(0X00);
      set_tris_c(0X00);
      set_tris_d(0X00);
      
      //salidas inicializadas con cero o apagadas
      output_b(0X00);
      output_c(0X00);
      output_d(0X00);
      
   //programa o proceso
   
   while(true)
   {
     int sum=0;
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
    
     u = (sum%100)%10;
     d = (sum%100)/10;
     
     if(u==0)
       output_b(DISPLAY[0]);
     else if(u==1)
       output_b(DISPLAY[1]);
     else if(u==2)
       output_b(DISPLAY[2]);
     else if(u==3)
       output_b(DISPLAY[3]);
     else if(u==4)
       output_b(DISPLAY[4]);
     else if(u==5)
       output_b(DISPLAY[5]);
     else if(u==6)
       output_b(DISPLAY[6]);
     else if(u==7)
       output_b(DISPLAY[7]);
     else if(u==8)
       output_b(DISPLAY[8]);
     else if(u==9)
       output_b(DISPLAY[9]);
     
     if(d==0)
        output_c(0x3F);   
     else if(d==1)
        output_c(0x06);
     else if(d==2)
        output_c(0x5B);
     else if(d==3)
        output_c(0x4F);
     else if(d==4)
        output_c(0x66);
     else if(d==5)
        output_c(0x6D);
     else if(d==6)
        output_c(0x7D);
     else if(d==7)
        output_c(0x07);
     else if(d==8)
        output_c(0x7F);
     else if(d==9)
        output_c(0x67);
   
     if(sum<=99)
        output_d(0x3F);
     else if((sum>=100) && (sum<=199))
        output_d(0x06);
     else if((sum>=200) && (sum<=255))
        output_d(0x5B);
   }
}
