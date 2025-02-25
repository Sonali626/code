#include<stdio.h>
int akermann(int i,int j);
int main()
{
    int x,y;
    printf("Enter two no:");
    scanf("%d %d",&x,&y);
    int c=akermann(x,y);
    printf("Output is %d",c);
    return 0;
}
int akermann(int i,int j)
{
    if(i==0)
    {
      return j+1;
    }
    if(j==0)
    {
      return akermann(i-1,1);
    }
    else
    {
      return akermann(i-1,akermann(i,j-1));
    }
}