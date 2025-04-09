#include <avr/io.h>
#define F_CPU 16000000Ul
#include <util/delay.h>

main (void){


  DDRD|=0xFF;
  DDRB&=~(0X1F);
  char a=0x00;
  char memoria1=0x00;
  char memoria2=0x00;
  char resultado=0x00;
  char ram=0x00;

  
  while(1){

    char p=PIND&0X1F;
    char u=ram%0x0A;
    char d=ram/0x0A;
    PORTB=(d<<4)|u;


    if(p==0x01){

      if(){




      }






    }








  }

return 0;

}