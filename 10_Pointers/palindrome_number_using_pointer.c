#include<stdio.h>

void main()
{
    int n, temp, rev = 0, rem;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;
    temp = *p;

    while(*p > 0)
    {
        rem = *p % 10;
        rev = rev * 10 + rem;
        *p = *p / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
