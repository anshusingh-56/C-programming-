#include <stdio.h>

int main()
{
    float n1, n2, avg;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    avg = (n1 + n2) / 2;

    printf("Average = %.2f", avg);

    return 0;
}
