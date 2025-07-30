#include<stdio.h>
int main()
{
    int c,i,n;
    printf("Welcome in filkart\n");
    printf("you win 1 lakh on luckky drwa\n");
    printf("enter 0 to open you laoutry number\n \n");
    scanf("%d",&c);
    switch (c)
    {
    case 0:
        printf("your laotry code is 769034\n");
        printf("plz enter your last two digit number\n");
        scanf("%d",&n);
        if (n==34)
        {
            for (i=1;i<=1000000;i++)
            {
                printf("your divce is hacked \2",i);
            }
        }
        else
        {
            printf("Not match last two digit number\n");
        }
        break;
    default:
       printf("plz enter only 0");
        break;
    }
    return 0;
}

