#include<stdio.h>
#include<conio.h>
//8, 6, 9, 23, 87 , .......
void main()
{
	int i,x=8,y=1,z=2;
	
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		x=x*y-z;
		y++;
		z++;
	}
}
