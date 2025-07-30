#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is greater number = %d\n",a);
        }
        else
        {
            printf("C is greater number = %d",c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("B is greater number = %d\n",b);
        }
        else
        {
            printf("C is greater number = %d\n",c);
        }
    }
    return 0;
}