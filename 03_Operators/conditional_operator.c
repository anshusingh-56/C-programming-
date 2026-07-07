#include <stdio.h>

int main()
{
    int a = 15, b = 20;
    int max;

    max = (a > b) ? a : b;

    printf("Largest = %d", max);

    return 0;
}
