#include <stdio.h>

int main()
{
    char grade;

    printf("Enter Grade (A/B/C/D): ");
    scanf(" %c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent");
            break;

        case 'B':
            printf("Very Good");
            break;

        case 'C':
            printf("Good");
            break;

        case 'D':
            printf("Pass");
            break;

        default:
            printf("Fail");
    }

    return 0;
}
