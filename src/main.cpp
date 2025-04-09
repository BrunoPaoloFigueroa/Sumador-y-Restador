#include <avr/io.h>
#define F_CPU 16000000Ul
#include <util/delay.h>

main (void){


  DDRD|=0xFF;
  DDRB&=~(0X1F);
  char a=0x00;
  char o1=0x00;
  char o2=0x00;
  char rf=0x00;

  
  while(1){

    char p=PIND&0X1F;

    if(p==0x01){

      if(){




      }






    }








  }

return 0;

}