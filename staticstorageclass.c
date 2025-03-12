#include<stdio.h>
int stat();
int main()
{
    for(int i=1;i<=3;i++)
    {
        stat();
    }
}
int stat()
{
    static int x=0;
    x=x+1;
    printf("X=%d\n",x);
}