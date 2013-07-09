#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>


void main()
{
   lcd_init();
   lcd_putc("saludos");
   
   while(1)
   {
      
   }

}
