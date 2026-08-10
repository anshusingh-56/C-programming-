#include<stdio.h>

void main()
{
    int n, i, fact = 1;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;

    for(i = 1; i <= *p; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}
