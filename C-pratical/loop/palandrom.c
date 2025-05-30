#include<stdio.h>

void main()
{
    int num,rev=0,temp;
    printf("Enter number: ");
    scanf("%d",&num);

    temp=num;
    while(num>0)
    {       //num=123
        int ld=num%10;//12,
        rev=(rev*10)+ld;//3
        num=num/10;//12
    }
    printf("reverse number is %d\n",rev);

    if(temp==rev)
    {
        printf("number is palandrom");
    }
    else
    {
        printf("number is not palandrom");
    }

}