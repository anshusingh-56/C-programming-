#include <stdio.h>

int main()
{
    int ch;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Addition Selected");
            break;

        case 2:
            printf("Subtraction Selected");
            break;

        case 3:
            printf("Multiplication Selected");
            break;

        case 4:
            printf("Division Selected");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
