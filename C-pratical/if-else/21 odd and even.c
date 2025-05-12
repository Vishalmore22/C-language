#include<stdio.h>
#include<conio.h>
//write a program to check number is even or odd using if-else
void main()
{
	int num;

	printf("Enter a number :");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is even.\n",num);
	}
	else
	{
		printf("%d is odd.\n",num);
	}
}
