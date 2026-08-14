#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct student s)
{
    printf("\nRoll Number = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f", s.marks);
}

void main()
{
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    display(s);
}
