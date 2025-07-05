#include<stdio.h>

void main()
{
    char str[100],c;
    int count=0;
    printf("Enter a string :");
    gets(str);
    for ( c = 'a'; c <='z'; c++)
    {
        count=0;
        for (int i = 0; str[i]!='\0'; i++)
        {
            if (c==str[i])
            {
                count++;
            }
            
        }
        if (count>0)
        {
            printf("%c = %d\n",c,count);
        }
        
    }
    
       
}