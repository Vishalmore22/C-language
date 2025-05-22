#include<stdio.h>
#include<conio.h>
//find a min in three
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
		if(b<a)
		{
			if(b<c)
			{
				printf("b is min");
			}
			else
			{
				printf("c is min");
			}
			
		}
		else
		{
			if(a<c)
			{
				printf("a is min");
			}
			else
			{
				printf("c is min");
			}
		}
	}
}
