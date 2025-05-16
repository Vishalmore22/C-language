#include<stdio.h>
#include<conio.h>
// 8, 22, 8, 28, 8, ... 
void main()
{
	int i,x=8,y=22;
	
	for(i=1;i<=10;i++)
	{
		printf("%d %d ",x,y);
		y+=6;
	}
	
}
