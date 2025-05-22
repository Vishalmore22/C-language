#include<stdio.h>
#include<conio.h>
//WAP to Find if a given no. is neutral or not using ladder if else.
void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    }
    else if (num < 0) {
        printf("The number is negative.\n");
    }
    else {
        printf("The number is neutral (zero).\n");
    }

    
}

