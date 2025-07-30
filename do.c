#include<stdio.h>
int main()
{
    int i,j,k,a;
    for ( i = 1; i <= 3; i++)
    {
        if(i==1||i==3)
        {
            a=1;
        }
        else{
            a=3;
        }
        for ( j =a; j <=i;j++)
        {
            printf("  ");
        }
        for ( k = 1; k <= a; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
