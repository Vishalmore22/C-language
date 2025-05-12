#include<stdio.h>
#include<conio.h>
//check number(positive/negitive)
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
