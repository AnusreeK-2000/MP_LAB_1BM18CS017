#include<stdio.h>
#include<reg51.h>

char xdata CommW _at_ 0xe803;
char xdata portB _at_ 0xe801;
char xdata portC _at_ 0xe802;

char port[50] = {0xff,0xff,0xff,0x80,0xff,0xff,0x80,0x86,0xff,0x80,0x86,0xab,0x80,0x86,0xab,0x90,0x86,0xab,0x90,0x88,0xab,0x90,0x88,0xc7,0x90,0x88,0xc7,0xc1,0x88,0xc7,0xc1,0xde,0xc7,0xc1,0xde,0xc1},i;
	
	
	delay()
	{
		long u;
		for(u=0;u<8000;u++);
	}
	void main()
	{
		int d,b,j,m;
		unsigned char k;
		CommW = 0x80;
		do
		{
			i=0;
			for(d=0;d<9;d++){
				for(b=0;b<4;b++)
				{
					k = port[i++];
					for(j=0;j<8;j++)
					{
						m=k;
						k=k&0x80;
					{
						if(k==00)
							portB=0x00;
						else
							portB=0x01;
					}
					
					portC = 0x01;
					portC = 0x00;
					k=m;
					k<<=1;
				}
			}
			
				delay();
		}
		
	}
while(1);
}	
	
