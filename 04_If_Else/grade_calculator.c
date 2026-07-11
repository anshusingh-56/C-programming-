#include <stdio.h>

int main()
{
    int per;

    printf("Enter percentage: ");
    scanf("%d", &per);

    if(per >= 90)
        printf("Grade A");
    else if(per >= 75)
        printf("Grade B");
    else if(per >= 60)
        printf("Grade C");
    else if(per >= 33)
        printf("Grade D");
    else
        printf("Fail");

    return 0;
}
