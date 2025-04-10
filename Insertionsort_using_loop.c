#include<stdio.h>
void insertionsort(int arr[],int n)
{
    int i,j,key;
    for(int i=1;i<n;i++)
    {
    key=arr[i];      
    j=i-1;
    while(j>=0&&arr[j]>key)
     {
       arr[j+1]=arr[j];
       j--;
     }
     arr[j+1]=key;
    } 
    }
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100],n,i;
    printf("Enter the total no. of element:");
    scanf("%d",&n);
    printf("Enter the element of Array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);  
    }
    printf("original Array:");
    printArray(arr,n);
    insertionsort(arr,n);
    printf("Sorted Array:");
    printArray(arr,n);
    return 0;
    
}