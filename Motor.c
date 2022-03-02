#include <reg51.h>
#include <stdio.h>

void msDelay(unsigned int time)
{
	unsigned int i,j;
	for(i=0; i<time; i++)
	{
		for(j=0; j<1000; j++);
	}
}

void Clockwise()
{
	unsigned int i;
	for(i=0; i<30; i++)
	{
		P0=0x01;
		msDelay(5);
		P0=0x02;
		msDelay(5);
		P0=0x04;
		msDelay(5);
		P0=0x08;
    msDelay(5);
	}
}

void AntiClockwise(void)
{
	unsigned int i;
	for(i=0; i<30; i++)
	{
		P0=0x08;
		msDelay(5);
		P0=0x04;
		msDelay(5);
		P0=0x02;
		msDelay(5);
		P0=0x01;
    msDelay(5);
	}
}

void main()
{
	P0=0;
	while(1)
	{
		Clockwise();
		msDelay(1000);
		P0=0;
		AntiClockwise();
		msDelay(1000);
		P0=0;
	}
}