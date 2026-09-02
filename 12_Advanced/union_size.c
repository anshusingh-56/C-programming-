#include<stdio.h>

union data
{
    int a;
    float b;
    char c;
};

void main()
{
    union data d;

    printf("Size of union = %lu bytes", sizeof(d));
}
