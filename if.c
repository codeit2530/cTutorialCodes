// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age\n");
//     scanf("%d",&age);
//     if (age>=18)
//     {
//         printf("You can vote!\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("enter a year\n");
//     scanf("%d",&year);
//     if (year%100==0)
//     {
//         if (year%400==0)
//         {
//             printf("%d is leap year\n",year);
//         }
//         else
//         {
//             printf("%d is not a leap year\n",year);
//         }
//     }
//     else
//     {
//         if (year%4==0)
//         {
//             printf("%d is leap year\n",year);
//         }
//         else
//         {
//             printf("%d is not a leap year\n",year);
//         }
//     }
//     return 0;
// }

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
            printf("%d is greater number\n",a);
        }
        else
        {
            printf("%d is greater number",c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("%d is greater number\n",b);
        }
        else
        {
            printf("%d is greater number\n",c);
        }
    }
    return 0;
}

