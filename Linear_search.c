#include<stdio.h>
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int arr[100],n,key,i;
    printf("Enter the total no. of elment:");
    scanf("%d",&n);
    printf("Elment of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elment which you want to find in this array:");
    scanf("%d",&key);
    int result=linearsearch(arr,n,key);
    if(result==-1)
    {
        printf("Element is not found.\n");
    }
    else
    {
        printf("Element found at %d index.",result);
    }
    
    return 0;
}