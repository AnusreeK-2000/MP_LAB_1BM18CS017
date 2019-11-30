#include<stdio.h>
#include<reg51.h>
char xdata port _at_ 0xe803;
char xdata porta _at_ 0xe800;
char idata acc _at_ 0x30;
delay()
{
	int j;
	for(j=0;j<1200;j++)
	{
	}
}
void main()
{
	int i=0,j=0;
	port = 0x80;
	while(1)
	{
		acc = 0x33;
		porta = acc;
		delay();
		acc = 0x66;
		porta = acc;
		delay();
		acc = 0x99;
		porta = acc;
		delay();
		acc = 0xcc;
		porta = acc;
		delay();
		
	}
	/*delay();
	while(j<200)
	{
		acc = 0xcc;
		porta = acc;
		delay();
		acc = 0x99;
		porta = acc;
		delay();
		acc = 0x66;
		porta = acc;
		delay();
		acc = 0x33;
		porta = acc;
		delay();
		j++;
	}*/
}

		