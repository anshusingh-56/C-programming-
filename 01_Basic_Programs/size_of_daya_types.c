#include <stdio.h>

int main()
{
    // sizeof() operator returns the size of a data type in bytes

    printf("Size of int = %zu bytes\n", sizeof(int));

    // Display the size of float data type
    printf("Size of float = %zu bytes\n", sizeof(float));

    // Display the size of char data type
    printf("Size of char = %zu bytes\n", sizeof(char));

    // Display the size of double data type
    printf("Size of double = %zu bytes\n", sizeof(double));

    return 0;
}
