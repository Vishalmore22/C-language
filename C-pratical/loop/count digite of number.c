#include<stdio.h>
#include<conio.h>

void main()
{
	int num, count=0;
	printf("Enter num :");
	scanf("%d",&num);
	
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("%d",count);
}
