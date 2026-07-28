#include<stdio.h>

void main()
{
    char str[100], rev[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++);

    for(i = i - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }

    rev[j] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome String");
    else
        printf("Not Palindrome String");
}
