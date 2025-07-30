#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("Enter a case number\n");
    printf(" case 1: select to square of any number\n");
    printf(" case 2: select to (a+b)^2 \n");
    printf(" case 3: select to greater three number\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter a number\n");
        scanf("%d",&a);
        printf("Square = %d\n",a*a);
        break;
    case 2:
        printf("enter two number\n");
        scanf("%d%d",&a,&b);
        printf("(a+b)^2= %d\n",a*a+b*b+2*a*b);
        break;
    case 3:
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is greater number = %d\n", a);
        }
        else
        {
            printf("C is greater number = %d\n",c);
        }
    }
    else if (b>c)
    {
        printf("B is greater number = %d\n",b);
    }
    else
    {
        printf("C is greater number = %d\n",c);
    }
    default:
     printf("Your any case dose not match\n ");
        break;
    }
    return 0;
}