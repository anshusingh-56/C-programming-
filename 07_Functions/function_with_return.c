#include<stdio.h>

int square();

int square()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n * n;
}

void main()
{
    int ans;

    ans = square();

    printf("Square = %d", ans);
}
