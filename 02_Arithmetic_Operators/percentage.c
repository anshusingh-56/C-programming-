#include <stdio.h>

int main()
{
    float obt, total, per;

    printf("Enter obtained marks: ");
    scanf("%f", &obt);

    printf("Enter total marks: ");
    scanf("%f", &total);

    per = (obt / total) * 100;

    printf("Percentage = %.2f%%", per);

    return 0;
}
