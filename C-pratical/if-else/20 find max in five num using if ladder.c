#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	
	printf("Enter a :");
	scanf("%d",&a);
	
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("Enter c :");
	scanf("%d",&c);
	
	printf("Enter d :");
	scanf("%d",&d);
	
	printf("Enter e :");
	scanf("%d",&e);
	
	if(a>b && a>c && a>d && a>e)
	{
		printf("a is max");
	}
	else if(b>c && b>d && b>e && b>a)
	{
		printf("b is max");
	}
	else if(c>d && c>e && c>a && c>b)
	{
		printf("c is max");
	}
	else if(d>e && d>a && d>b && d>c)
	{
		printf("d is max");
	}
	else if(e>a && e>b && e>c && e>d)
	{
		printf("e is max");
	}
}
