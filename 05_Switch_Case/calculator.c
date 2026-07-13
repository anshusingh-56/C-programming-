#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n2. Sub\n3. Mul\n4. Div\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("%d", a + b);
            break;

        case 2:
            printf("%d", a - b);
            break;

        case 3:
            printf("%d", a * b);
            break;

        case 4:
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
