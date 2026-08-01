#include<stdio.h>

void main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == ' '))
        {
            count++;
        }
    }

    printf("Special Characters = %d", count);
}
