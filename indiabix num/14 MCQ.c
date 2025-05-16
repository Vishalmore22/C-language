#include<stdio.h>
#include<conio.h>
//201, 202, 204, 207, ...
void main()
{
	int i,x=201,y=1;
	
	for(i=1;i<=5;i++)
	{
		printf("%d ",x);
		x=x+y;
		y++;
	}
	
}

