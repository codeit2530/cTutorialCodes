#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=25;i++)
    {
        if (i%1==0||i%2==0)
        {
            continue;
        }
        for (j=1;j<=10;j++)
        {
            printf("%d\n",i*j);
        } 
        printf("\n");
    }
    return 0;
}
