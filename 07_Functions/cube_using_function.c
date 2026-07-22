#include<stdio.h>

int cube(int n)
{
    return n * n * n;
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cube = %d", cube(n));
}
