#include<stdio.h>

int check(int n)
{
    int rem, temp, rev = 0;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
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
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
