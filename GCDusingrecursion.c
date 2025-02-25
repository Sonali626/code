//WAP to find greatest common factor using recursive function
#include<stdio.h>
int GCD(int i,int j);
int main()
{
    int x,y;
    printf("Enter two number to find Greatest Common Factor:");
    scanf("%d %d",&x,&y);
    int c=GCD(x,y);
    printf("Greatest common factor of %d and %d is %d",x,y,c);
    return 0;
}
int GCD(int i,int j)
{
    if(j==0)
    {
      return i;
    }
    else
    {
      return GCD(j,i%j);
    }
}