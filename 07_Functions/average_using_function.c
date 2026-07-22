#include<stdio.h>

float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

void main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Average = %.2f", avg(a, b, c));
}
