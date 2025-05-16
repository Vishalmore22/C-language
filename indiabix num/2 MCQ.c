#include<stdio.h>
#include<conio.h>
//7, 10, 8, 11, 9, 12, ... 
void main()
{
	int i,x=7;
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x+3);
		x++;
	}
}
