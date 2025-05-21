#include<stdio.h>
#include<conio.h>
//WAP to find a the answer given formula (x+y)3
void main()
{
	int x,y;
	printf("Enter x num :");
	scanf("%d",&x);
	printf("Enter y num :");
	scanf("%d",&y);
	
	printf("(x+y)3=%d",(x*x*x)+3*(x*x)*y+3*x*(y*y)+(y*y*y));
	}

