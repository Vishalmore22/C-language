#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mult(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}

void main()
{
    int a, b, ans; //8byte
    char choice; //1byte
     printf("select option :");
    scanf("%c",&choice);

    printf("Enter 1 value :");
    scanf("%d",&a);

    printf("Enter 2 value :");
    scanf("%d",&b);

   

    switch (choice)
    {
        case'+': ans = add(a,b);
        printf("%d",ans);
        break;

        case'-': ans = sub(a,b);
        printf("%d",ans);
        break;

        case'*': ans = mult(a,b);
        printf("%d",ans);
        break;

        case'/': ans = div(a,b);
        printf("%d",ans);
        break;
        default : printf("Enter valid details");
    }
}