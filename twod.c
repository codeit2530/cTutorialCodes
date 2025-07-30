#include<stdio.h>
int main()
{
    int i,j,a[5][4];
    printf("Enter 5*4 number\n");   
    for (i=0;i<5;i++)
    {
        for (j=0;i<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
        } 
        printf("\n");
    }
    return 0;
}