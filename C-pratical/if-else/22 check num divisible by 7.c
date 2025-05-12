#include<stdio.h>
#include<conio.h>
//write a program to check number is divisible by 7 or not using if else
void main()
{
	int num ;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	if(num%7==0)
	{
		printf("number is divisible by 7");
	}
	else
	{
		printf("number is not divisible by 7");
	}
	
	
}
