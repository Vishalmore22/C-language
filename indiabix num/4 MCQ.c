#include<stdio.h>
#include<conio.h>
//22, 21, 23, 22, 24, 23, ... 
void main()
{
	int i,x=22;
	
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x-1);
		x+=1;
	}
	
}
