#include<stdio.h>
#include<conio.h>
//give grade asper percentage
void main(){
	int percentage;
	printf("Enter your percentage :");
	scanf("%d",&percentage);
	
	if(percentage>100)
	{
		printf("Enter valid details");
	}	
	else if(percentage>=90)
	{
		printf("your grade A+");
	}
	else if(percentage>=80)
	{
		printf("your grade A");
	}
	else if(percentage>=70)
	{
		printf("your grade B+");
	}
	else if(percentage>=60)
	{
		printf("your grade B");
    }
    else if(percentage>=50)
	{
		printf("your grade C");
    }
    else if(percentage>=40)
	{
		printf("your grade D");
    }
    else if(percentage<40)
	{
		printf("fail");
    }
}
