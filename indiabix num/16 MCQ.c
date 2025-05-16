#include<stdio.h>
#include<conio.h>
//80, 10, 70, 15, 60, ... 
void main()
{
	int i,x=80,y=10;
	
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,y);
		x-=10;
		y+=5;
	}
}
