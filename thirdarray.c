#include<stdio.h>
int main()
{
    int i,j,k,l,b,a[2][3][4];
    printf("Enter 5 times 5 and 4 number\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 4; k++)
            {
                scanf("%d",&a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 4; k++)
            {
                for ( l = 0; l < 4-k-1; l++)
                {
                    if (a[i][j][l]<a[i][j][l+1])
                    {
                        b=a[i][j][l];
                        a[i][j][l]=a[i][j][l+1];
                        a[i][j][l+1]=b;
                    }    
                }    
            }    
        }    
    }
    printf("The number arrange in descending order are given below\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 4; k++)
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
} 