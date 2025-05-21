#include<stdio.h>
#include<conio.h>
//WAP to Simple interest.
void main()
{
	int si,p,r,t;
	
	printf("Enter a p :");
	scanf("%d",&p);
	printf("Enter a r :");
	scanf("%d",&r);
	printf("Enter a t :");
	scanf("%d",&t);
	
	si=(p*r*t)/100;
	
	printf("simple interset %d:",si);
}

