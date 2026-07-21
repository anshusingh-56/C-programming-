#include<stdio.h>

int largest(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

void main()
{
    int a, b, ans;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    ans = largest(a, b);

    printf("Largest Number = %d", ans);
}
