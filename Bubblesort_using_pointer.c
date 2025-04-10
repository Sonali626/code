#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int *arr,int n)
{
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                swap(arr+j,arr+j+1);
            }
        }
    }
}
void printArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
  //  int arr[]={3,9,1,8,2,0,6,4};
  //int n=sizeof(arr)/sizeof(arr[0]);
    int arr[100],n;
    printf("enter total no. of element");
    scanf("%d",&n);
    printf("Element of the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original Array:\n");
    printArray(arr,n);

    bubblesort(arr,n);

    printf("Sorted Array:\n");
    printArray(arr,n);
    return 0;
}