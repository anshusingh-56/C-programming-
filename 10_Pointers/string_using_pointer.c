#include<stdio.h>

void main()
{
    char str[100];
    char *p;

    p = str;

    printf("Enter a string: ");
    scanf("%s", p);

    printf("String = %s", p);
}
