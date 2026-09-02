#include<stdio.h>

union student
{
    int roll;
    char grade;
    float marks;
};

void main()
{
    union student s;

    s.roll = 101;
    printf("Roll Number = %d\n", s.roll);

    s.grade = 'A';
    printf("Grade = %c\n", s.grade);

    s.marks = 90.5;
    printf("Marks = %.2f", s.marks);
}
