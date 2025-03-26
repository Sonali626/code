#include<stdio.h>
#include<string.h>
int main()
{
    char str[4]="123";
    int x= str[0]-'0';
    int y= str[1]-'0';
    int z= str[2]-'0';
    printf("%d%d%d",x,y,z);
    return 0;
}