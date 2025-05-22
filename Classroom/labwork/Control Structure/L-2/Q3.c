#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b,c,d;
	
	printf("Enter a :");
	scanf("%d",&a);
	
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("Enter c :");
	scanf("%d",&c);
	
	printf("Enter d :");
	scanf("%d",&d);
	
	if(a==b && b==c && c==d)
	{
		printf("all are equal");
	}
	else
	{
		if(a>b)
		{
			if(a>c)
			{
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
			if(b>c)
			{
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
}
