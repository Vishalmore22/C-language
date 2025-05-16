#include<stdio.h>
#include<conio.h>
//14, 28, 20, 40, 32, 64, ... 
void main()
{
	int i,x=14;
	
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x*2);
		x=x*2-8;	
	}
}
