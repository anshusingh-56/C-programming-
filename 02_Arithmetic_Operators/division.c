#include <stdio.h>

int main()
{
    float a, b, res;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    res = a / b;

    printf("Division = %.2f", res);

    return 0;
}

