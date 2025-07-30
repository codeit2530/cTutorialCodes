#include<stdio.h>
int main()
{
    int i,j,k,a;
    i=1;
    do
    {
        if (i<=5)
        {
            a=2*(6-i)-1;
        }
        else
        {
            a=2*(i-6+1)+1;
        }
        j=1;
        do
        {
            printf(" ");
            j++;
        } while (j<=a);
        k=1;
        do
        {
            printf("* ");
            k++;
        } while (k<=2*5-a);
        printf("\n");
        i++;
    } while (i<=9);
    return 0; 
} 
