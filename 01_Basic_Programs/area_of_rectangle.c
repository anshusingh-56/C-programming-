#include <stdio.h>
int main()
{
    float l,b,area;

    printf("Enter length and width: ");
    scanf("%f %f", &l,&b);

    area = l*b;

    printf("Area = %.2f", area);

    return 0;
}
