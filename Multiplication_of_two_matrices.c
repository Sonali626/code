#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],result[2][2]={0};
    int i,j,k;

    //input for 1st matrix
    printf("Enter the elements of 1st matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

        //input for 2nd matrix
        printf("Enter the elements of 2nd matrix:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        // Matrix Mutiplication
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                for(k=0;k<2;k++)
                {
                    result[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        //Display result
        printf("Resultant Matrix is :\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
        return 0;
        
}