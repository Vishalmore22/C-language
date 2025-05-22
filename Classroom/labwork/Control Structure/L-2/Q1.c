#include<stdio.h>
#include<conio.h>
// Find max. from given 2 no. using ternary operator.
void main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("Maximum number is: %d\n", max);

    
}

