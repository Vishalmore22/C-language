#include<stdio.h>

void inch(int f)
{
    int i;

    i = f *12;
    printf("%d",i);
}
 void main()
 {
    int n;

    printf("Entre feet :");
    scanf("%d",&n);

    inch(n);
}