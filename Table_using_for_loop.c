//WAp to print table
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number which you want to print the table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,i*n);
    }
    return 0;
}