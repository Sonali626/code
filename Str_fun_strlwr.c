#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "HELLO World!";
    printf("Original: %s\n", str);

    printf("Lowercase: %s\n", strlwr(str));

    return 0;
}