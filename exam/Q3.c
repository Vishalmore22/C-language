#include<stdio.h>
#include<conio.h>
//Write C program to count number of digits in a number.
void main()
{
	int num;
	printf("Enter num :");
	scanf("%d",&num);
	int count=0;
	while(num>0)
	{
		
		num=num/10;
		count++;
	}
	printf("%d",count);
}
