#include <stdio.h>
// A
// B C
// D E F
// G H I J
// K L M N O
void main()
{
    char i, j,k='A';

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ",k);
            
        }
        printf("\n");
    }
}