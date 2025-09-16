// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=0;i<=100;i++)
//     printf("%d\n",i);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=0;i<5;i++)
//     printf("saloni\n");
//     return 0;
// }

#include<stdio.h>
int main()
{
    int f=1,i,n;
    printf("enter a number\n");
    scanf("%d",&n);//5
    for(i=1;i<=n;i++)//n=5
    {
        f=f*i;//f=1*1=1
        // f=1*2=2
        // f=2*3=6
        // f=6*4=24
        // f=24*5=120
        printf("factroial=%d\n",f);
    }
    return 0;
}
