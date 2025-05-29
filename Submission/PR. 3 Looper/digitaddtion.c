#include <stdio.h>

void main() {
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    first = num;

    printf("Sum of first and last digits = %d\n", first + last);

    
}
