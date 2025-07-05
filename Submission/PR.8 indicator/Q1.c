#include<stdio.h>
void main()
{
    char str[100];
    char*ptr;
    int i=0;
    printf("Enter any string: ");
    gets(str);
    ptr=str;

    while(*ptr != '\0')
    {
        ptr++;
        i++;
    }
    printf("length of string is %d",i);
    
}