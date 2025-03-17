//WAP to print number series using do-while loop.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    do
    {
        printf("value of numder is %d\n",number);
        ++number;
    } while (number<=100);
    return 0; 
}