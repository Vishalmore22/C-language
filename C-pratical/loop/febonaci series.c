#include<stdio.h>
#include<conio.h>

void main()
{
	int first,second,i;
	
	printf("0 1 ");
	
	for(i=1;i<=10;i++)
	{
		int third= first+second;
		printf("%d ",third);
		first=second;
		second=third;
	}
}
