#include <avr/io.h>
#define F_CPU 16000000Ul
#include <util/delay.h>

main (void){


  DDRD=0xFF;
  DDRB&=~(0X1F);
  char a=0x00;
  char memoria1=0x00;
  char memoria2=0x00;
  char resultado=0x00;
  char ram=0x00;

  
  while(1){

    char p=PINB&0X1F;
    char u=ram%0x0A;
    char d=ram/0x0A;
    PORTD=(d<<4)|u;
    _delay_ms(100);


    switch (p)
    {
    case 0x01:
     ram++;
     _delay_ms(500);

      if(ram>99){
        ram=0x00;
        _delay_ms(500);
      }
      break;

      case 0x02:
      ram--;
        _delay_ms(500);

        if(ram<0){
          ram=99;
          _delay_ms(500);
        }


      break;
    
    }






  }

return 0;

}