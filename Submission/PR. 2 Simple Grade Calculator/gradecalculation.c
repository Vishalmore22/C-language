#include <stdio.h>

void main()
{
    int score;
    char grade;
    printf("Enter your score (0 to 100): ");
    scanf("%d", &score);

    // Validate score range
    grade = (score >= 90 && score <= 100) ? 'A' : (score >= 80) ? 'B'
                                              : (score >= 70)   ? 'C'
                                              : (score >= 60)   ? 'D'
                                              : (score >= 50)   ? 'E'
                                              : (score >= 0)    ? 'F'
                                                                : '?';

    if (grade == '?')
    {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
    }
    else
    {
        printf("Your grade is: %c\n", grade);
    

    switch (grade)
    {
    case 'A':
        printf("Excellent work!\n");
        break;
    case 'B':
        printf("Well done.\n");
        break;
    case 'C':
        printf("Good job.\n");
        break;
    case 'D':
        printf("You passed, but you could do better.\n");
        break;
    case 'E':
        printf("You passed, but there's room for improvement.\n");
        break;
    case 'F':
        printf("Sorry, you failed.\n");
        break;
    default:
        printf("No comments available.\n");
    }
    
    
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("Congratulations! You are eligible for the next level.\n");
    }
    else if (grade == 'F')
    {
        printf("Please try again next time.\n");
    }
    
    }
}
