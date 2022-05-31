#include<LPC21xx.h>
void delay(void);
void serial(void);
unsigned char mg;

int main()
{
  unsigned int i;
  unsigned char msg[]={"Welcome to KLE \n"};		
  serial();
  while(1)
 {
  for(i=0;i<15;i++)
    {
			U0THR = msg[i];
			while(!(U0LSR & 0x20));		  
    }
  while(!(U0LSR & 0x01)); 
		mg=U0RBR;  
		U0THR=mg;
	while(!(U0LSR & 0x20)); 
		delay();
  }
}

void serial()
{
  PINSEL0 = 0x00000005; 			
  U0LCR = 0x83; 					
  U0DLL = 0x61; 					
  U0LCR = 0x03; 								
}

void delay()
{
  unsigned int i;
  for(i=0;i<10000;i++);
} 
