#include<stdio.h>
int main()
{
    int a=5, b=6;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("value of a=%d and b=%d\n",*ptr1,*ptr2);
    printf("Address of a=%u and b=%u\n",ptr1,ptr2);
    printf("After increment address of a=%u and b=%u\n",++ptr1,++ptr2);
    printf("After decrement address of a=%u and b=%u\n",--ptr1,--ptr2);
   // printf("After addition the output is:%u\n",ptr1+ptr2);
    printf("After subtraction the output is:%u\n",ptr1-ptr2);
    printf("after addtion of a constant output is:%u\n",ptr1+5);
    printf("output is:%d\n",++(*ptr1));
    printf("output is:%d\n",*++ptr1);
    printf("output is:%d\n",++*ptr1);
    if(ptr1>ptr2)
    {
        printf("ptr1");
    }
    else
        printf("ptr2");
}
































