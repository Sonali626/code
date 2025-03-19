#include <stdio.h>

int multiply(int x, int y)
{
    return x * y;
}

int main() 
{
    int result = multiply(4, 5);
    printf("Multiplication = %d\n", result);
    return 0;
}