#include<stdio.h>
int main()
{
    int A[100],m,i,j,swapping;
    printf("Enter the total no. of element:");
    scanf("%d",&m);
    printf("Element of the Array:\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swapping=A[j];
                A[j]=A[j+1];
                A[j+1]=swapping;
            }
        }
    }
    printf("After Bubble sort:");
    for(int i=0;i<m;i++)
    {
        printf("%d",A[i]);
    }
    return 0;
}