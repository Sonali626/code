#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello World!";
    printf("Original: %s\n", str);

    printf("Uppercase: %s\n", strupr(str));

    return 0;
}