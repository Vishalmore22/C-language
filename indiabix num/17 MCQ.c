#include<stdio.h>
#include<conio.h>
//2, 6, 18, 54, ...
void main()
{
	int i,x=2;
	
	for(i=1;i<=5;i++)
	{
		printf("%d ",x);
		x*=3; 
	}
}
