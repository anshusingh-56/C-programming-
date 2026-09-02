#include<stdio.h>

union student
{
    int roll;
    float marks;
};

void main()
{
    union student s;

    s.roll = 101;
    printf("Roll Number = %d\n", s.roll);

    s.marks = 85.5;
    printf("Marks = %.2f", s.marks);
}
