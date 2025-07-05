#include <stdio.h>

void calculator(int a, int b)
{
  int choice;

  do
  {
    printf("\nOptions:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("%d + %d = %d\n", a, b, a + b);
      break;
    case 2:
      printf("%d - %d = %d\n", a, b, a - b);
      break;
    case 3:
      printf("%d * %d = %d\n", a, b, a * b);
      break;
    case 4:
      if (b != 0)
        printf("%d / %d = %d\n", a, b, a / b);
      else
        printf("Division by zero not allowed!\n");
      break;
    case 5:
      if (b != 0)
        printf("%d %% %d = %d\n", a, b, a % b);
      else
        printf("Modulus by zero not allowed!\n");
      break;
    case 6:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice! Try again.\n");
      break;
    }
  } while (choice != 6);
}

void main()
{
  int a, b;

  printf("Enter a value: ");
  scanf("%d", &a);

  printf("Enter b value: ");
  scanf("%d", &b);

  calculator(a, b); 
}
