#include<stdio.h>
#include<conio.h>
//31, 29, 24, 22, 17, ...
void main()
{
	int i,x=31;
	
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x-2);
		x-=7;
	}
}

