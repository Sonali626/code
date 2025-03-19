#include <stdio.h>

int getNumber()
{
    return 10;
}

int main() 
{
    int num = getNumber();  // Function call
    printf("Number = %d\n", num);
    return 0;
}
