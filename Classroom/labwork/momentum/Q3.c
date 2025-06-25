//Write C program to find out max from 4 numbers using nested if.
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,d;
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter c:");
 scanf("%d",&c);
 printf("enter d:");
 scanf("%d",&d);
 
 //a,b,c,d,
 if(a>b)
 {
 	//a,c,d
 	if(a>c)
 	{
 		//a,d
 		if(a>d)
 		{
 			printf("a is max");
		}
		else
		{
			printf("d is max");
		}		
	}
	else
	{
		//c,d
		if(c>d)
		{
     		printf("c is max");
		}
		else
		{		
			printf("d is max");
		}
 }
}
 else
 {
 	//b,c,d
 	if(b>c)
 	{
 		//b,d
 		if(b>d)
 		{
 			printf("b is max");	
		}
		else
		{
			printf("d is max");
		}
			
	}
	else
	{
		//c,d
		if(c>d)
		{
	     	printf("c is max");
		}
		else
		{
			printf("d is max");		
		}	
	}
 }
}
 