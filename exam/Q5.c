#include<stdio.h>
#include<conio.h>
//Write C program to calculate factorial of a number.
void main()
{
	int n,f=1,i=1;
	printf("Enter a num :");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial is %d = %d",n,f);
}
