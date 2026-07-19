#include<stdio.h>

void display(int n);

void display(int n)
{
    printf("Number = %d", n);
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    display(n);
}
