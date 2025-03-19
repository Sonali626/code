#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[] = "apple";
    char str2[] = "anana";

    int result = strcmp(str1, str2);
    printf("Result: %d\n", result); 
    return 0;
}