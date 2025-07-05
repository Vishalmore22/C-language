#include <stdio.h>

void main()
{
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);  

   
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }


    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}
