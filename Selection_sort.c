#include<stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int si=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[si])
            si=j;
        }
            swap(&arr[i],&arr[si]);
        
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
    int arr[100],n;
    printf("Enter total no. of element:\n");
    scanf("%d",&n);
    printf("Element of the Array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original Array\n");
    printArray(arr,n);
    selectionsort(arr,n);
    printf("Sorted Array\n");
    printArray(arr,n);
    return 0;
}
