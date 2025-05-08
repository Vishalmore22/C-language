#include<stdio.h>
#include<conio.h>

void main(){
	int number;
	printf("Enter number :");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("number is positive");
	}
	else if(number<0)
	{
		printf("number is negitive");
	}
	else if(number>=0)
	{
		printf("number is zero");
	}
	
}
