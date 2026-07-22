#include<stdio.h>

int square(int n)
{
    return n * n;
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d", square(n));
}
