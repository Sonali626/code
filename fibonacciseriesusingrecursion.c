#include<stdio.h>
int fib(int n);
int main()
{
    int x;
    printf("Enter a number which you want to find fibonacci of that number:");
    scanf("%d",&x);
    int c =fib(x);
    printf("Fibonacci of %d is %d\n",x,c);
    return 0;
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}