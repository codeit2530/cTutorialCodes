// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while (i<=200)
//     {
//         if (i%2==1)
//         {
//             printf("%d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i,j,k;
    i=1;
    while (i<=5)
    {
        j=i;
        while (j<=4)
        {
            printf("  ");
            j++;
        }
        k=1;
        while (k<=2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}