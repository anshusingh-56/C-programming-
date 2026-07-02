#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius = 5;
    float area = PI * radius * radius;

    // .2f means display the value with 2 digits after the decimal point
    printf("Area = %.2f", area);

    return 0;
}
