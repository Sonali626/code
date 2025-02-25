//WAP to find factorial of given number using recursive function.
#include<stdio.h>
int fact(int n);
int main()
{
    int x;
    printf("Enter a number which you want to find factorial:");
    scanf("%d",&x);
    int c =fact(x);
    printf("Factoeial of %d is %d\n",x,c);
    return 0;
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
