#include<stdio.h>
#include<conio.h>
//WAP to Find min. from given 5 no. using nested if else.
void main(){
	int a,b,c,d,e;
	
	printf("enter a :");
	scanf("%d",&a);
	
	printf("enter b :");
	scanf("%d",&b);
	
	printf("enter c :");
	scanf("%d",&c);
	
	printf("enter d :");
	scanf("%d",&d);
	
	printf("enter e :");
	scanf("%d",&e);
	
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("a is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
				
			}
		}
			
		
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{ 
				if(b<e)
				{
					printf("b is min");
				}
				else
				{
					printf("e is min");
				}	
			}else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
				
			}
			
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is min");
				}
				else
				{
					printf("e is min");
				}
			}
		}
			
	}
	
}
