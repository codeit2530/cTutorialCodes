#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("ente a number\n");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        c=a+b;
        a=a+b;
        b=c;
        printf("%d it is fibonnaci series\n",i);
        i++;
    }
    //if(b==n)
    //{
    //    printf("it is fibonnaci series\n");
    //}
    //else
    //{
     //   printf("it is not fibonnaci series\n");
   // }
    return 0;
}