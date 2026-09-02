#include<stdio.h>

union data
{
    int num;
    float value;
    char ch;
};

void main()
{
    union data d;

    printf("Enter an integer: ");
    scanf("%d", &d.num);
    printf("Integer = %d\n", d.num);

    printf("Enter a character: ");
    scanf(" %c", &d.ch);
    printf("Character = %c", d.ch);
}
