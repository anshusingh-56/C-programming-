#include<stdio.h>

int check(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

void main()
{
    int n, a;

    printf("Enter the number: ");
    scanf("%d", &n);

    a = check(n);

    if(a == 1)
        printf("Even Number");
    else
        printf("Odd Number");
}
