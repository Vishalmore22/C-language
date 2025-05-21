#include<stdio.h>
#include<conio.h>
//WAP to Find area of triangle.
void main()
{
	int height,base;
	float a;
	printf("Enter height : ");
	scanf("%d",&height);
    printf("Enter base : ");
	scanf("%d",&base);
	
	a=0.5*height*base;
	
	printf("area of triangle is %f",a);	
	
}
