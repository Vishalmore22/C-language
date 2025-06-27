#include<stdio.h>

void main()
{
    char choise;
    int a,b;

    printf("Enter number a :");
    scanf("%d",&a);

    printf("Enter number b :");
    scanf("%d",&b);

    printf("Enter choice +,-,*,/  :");
    scanf(" %c",&choise);

    switch (choise)
    {
    case '+' :printf("%d + %d = %d",a,b,a+b);
    break;
    case '-' :printf("%d - %d = %d",a,b,a-b);
    break;
    case '*' :printf("%d * %d = %d",a,b,a*b);
    break;
    case '/' :printf("%d / %d = %d",a,b,a/b);
    break;
    default:printf("Enter  valid datils ");
    break;    
    }
}