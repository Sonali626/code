//WAP to check given number is palindrome or not.
#include<stdio.h>
int main()
{
    int n,original,reverse=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);

    // for comparsion
    original=n;
     while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }

    // Check if oridinal and reverse no. is same
    if(original == reverse)
    {
        printf("%d is a palindrome\n",original);
    }
    else
    {
        printf("%d is not a palindrome\n",original);
    }
    return 0;
}
