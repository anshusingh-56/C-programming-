#include <stdio.h>

int main()
{
    int ch;

    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Area of Circle");
            break;

        case 2:
            printf("Area of Rectangle");
            break;

        case 3:
            printf("Area of Square");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
