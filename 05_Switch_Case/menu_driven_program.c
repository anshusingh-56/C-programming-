#include <stdio.h>

int main()
{
    int ch;

    printf("1. Tea\n");
    printf("2. Coffee\n");
    printf("3. Juice\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("You selected Tea");
            break;

        case 2:
            printf("You selected Coffee");
            break;

        case 3:
            printf("You selected Juice");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
