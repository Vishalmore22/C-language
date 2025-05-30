#include<stdio.h>
#include<conio.h>

void main()
{
	int num,count=0,i,arm=0;
	printf("Enter num :");
	scanf("%d",&num);
	
	int temp=num;
	
	while(num>0)
	{
		
		num=num/10;
		count++;
	}
	while(temp>0) //15>0
	{
		int x = 1;
		int ld=temp%10; //153%10=3,15%10=5
//		x=(ld^count)+x; //x=3^3+0=27 , x=5^3+27=152
		for(i=1; i<=count; i++)
		{
			x = x * ld; // 27
		}
		arm = arm + x;
		temp=temp/10; //153/10=15
	}
	
	printf("%d",arm);
	
	
}
