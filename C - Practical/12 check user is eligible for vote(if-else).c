#include<stdio.h>
#include<conio.h>
// wap to check user is eligible for vote
   
 void main(){
 	
 	int age;
 	printf("Enter your age :");
 	scanf("%d",&age);
 	
 	if(age>=18)
	{		
 		printf("your are eligible for vote !");
	}
    else if(age<=0)
	{
		printf("0 and negitive age not allowed");
	}
	else if(age>=100)
	{
		printf("Grater than 100 age not allowed");
	}
	 else if(age<17)
	{
	  	printf("your are not eligible for vote !");	
	}
 }
