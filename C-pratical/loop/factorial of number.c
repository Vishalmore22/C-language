#include<stdio.h>
#include<conio.h>
//find factorial of n 
void main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	
	int fact=1,i=1;
	while(i<=n)//n=5,i=2,i=3,i=4,i=5
	{
		fact=fact*i;//f=1,f=2,f=6,f=24,f=120
		i++;//1+1=2 i=2,2+1=3 i=3,3+1=4 i=4,4+1=5 i=5
	}
	printf("factorial is %d = %d",n,fact);
}
