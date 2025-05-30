#include<stdio.h>

void main()
{
    int num,ld,x=0,y=1;
    printf("Enter num:");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        ld=num%10;
        x=ld+x;
        num=num/10;
    }
    printf("%d \n",x);
    while(temp>0)
    {
        ld=temp%10;
        y=ld*y;
        temp=temp/10;
    }
    printf("%d \n",y);
    if(x==y)
    {
    	printf("number is magic");
	}
	else
	{
		printf("number is not magic");
	}
} 