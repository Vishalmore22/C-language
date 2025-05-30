#include<stdio.h>
#include<conio.h>

void main()
{
	int phone,count=0;
	
	printf("Enter phone num :");
	scanf("%d",&phone);
	while(phone>0)
	{
		phone=phone/10;
		count++;
	}
	if(count<=10)
	{
		printf("number is valid");
	}
	else
	{
		printf("number is invalid");
	}
}	

