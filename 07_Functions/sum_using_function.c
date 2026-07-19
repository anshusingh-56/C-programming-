#include<stdio.h>

int sum(int a, int b);

int sum(int a, int b)
{
    return a + b;
}

void main()
{
    int a, b, ans;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    ans = sum(a, b);

    printf("Sum = %d", ans);
}
