#include<stdio.h>
#include<conio.h>
//wap to print multiplication table of user given number
void main()
{
	int n,i=1;
	
	printf("Enter a number :");
	scanf("%d",&n);//n=5
	
	while(i<=10)//check condition 
	 // i=1,i=2
	{
		printf("%d * %d =%d\n",n,i,n*i);// 5*1=5,5*2=10,
		i=i+1;// 1+1=2 i=2,
	}
	
}
