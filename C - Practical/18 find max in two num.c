#include<stdio.h>
#include<conio.h>
//find max from two num
void main(){
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("a is max");
	}
	else if(a<b)
	{
		printf("b is max");
	}
	else
	{
		printf("a and b are equal");
	}
		
}
