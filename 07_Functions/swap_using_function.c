#include<stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
}

void main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    swap(a, b);
}
