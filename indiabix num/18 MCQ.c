#include<stdio.h>
#include<conio.h>
//5.2, 4.8, 4.4, 4, ...
void main()
{
	float i,x=5.2;
	
	for(i=1;i<=5;i++)
	{
		printf("%.1f ",x);
		x-=0.4;
	}
}
