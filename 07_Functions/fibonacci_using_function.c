#include<stdio.h>

void fibo();

void fibo()
{
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void main()
{
    fibo();
}
