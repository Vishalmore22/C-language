#include<stdio.h>
#include<conio.h>
//find a max in three num
void main(){
	int a,b,c;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	
	if(a==b && b==c)
	{
		printf("a,b and c are equal");
	}
	else
	{
		if(b>a)
		{
			if(b>c)
			{
				printf("b is max");
			}
			else
			{
				printf("c is max");
			}
			
		}
		else
		{
			if(a>c)
			{
				printf("a is max");
			}
			else
			{
				printf("c is max");
			}
		}
	}
}
