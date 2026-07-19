#include<stdio.h>

int square(int n);

int square(int n)
{
    return n * n;
}

void main()
{
    int n, ans;

    printf("Enter a number: ");
    scanf("%d", &n);

    ans = square(n);

    printf("Square = %d", ans);
}
