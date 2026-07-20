#include<stdio.h>

int fact(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void main()
{
    int a, n;

    printf("Enter the number: ");
    scanf("%d", &n);

    a = fact(n);

    printf("Factorial is %d", a);
}
