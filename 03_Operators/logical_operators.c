#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("AND = %d\n", (a < b && b > 0));
    printf("OR = %d\n", (a > b || b > 0));
    printf("NOT = %d\n", !(a > b));

    return 0;
}
