#include<stdio.h>
int main()
{
    int n,i;
    float number[100],sum=0.0,average;
    printf("Enter the no. of elements:");
    scanf("%d",&n);

    // Input element into the array
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        {
            scanf("%f",&number[i]);
            sum+=number[i];
        }
        average= sum/n;
        printf("Averrage of the entered number:%.2f\n",average);
        return 0;

}