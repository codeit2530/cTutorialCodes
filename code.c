// #include<stdio.h>
// int main()
// {
//   float a,b,c,d;
//   printf("Enter a amount \n");
//   scanf("%f",&a);
//   printf("Enter a rate\n");
//   scanf("%f",&b);
//   c=a/b;
//   d=c*25/100;
//   printf("benefit of 25%%=%f\n",d);
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter alphbates\n");
//     scanf("%c",&ch);
//     switch (ch)
//     {
//     case 'a':
//         printf("vowel\n");
//         break;
//     case 'e':
//         printf("vowel\n");
//         break;
//     case 'i':
//         printf("vowel\n");
//         break;
//     case 'o':
//         printf("vowel\n");
//         break;
//     case 'u':
//         printf("vowel\n");
//         break;
//     case 'A':
//         printf("vowel\n");
//         break;
//     case 'E':
//         printf("vowel\n");
//         break;
//     case 'I':
//         printf("vowel\n");
//         break;
//     case 'O':
//         printf("vowel\n");
//         break;
//     case 'U':
//         printf("vowel\n");
//         break;
//     default: printf("counsonate\n");
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=2,n;
//     printf("Enter a no\n");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         if (n%i==0)
//         {
//             break;
//         }
//         i++;
//     }
//     if (i==n)
//     {
//         printf("%d is a prime no\n",n);
//     }
//     else
//     {
//         printf("%d is not a prime no\n",n);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a=0,b,i,n;
//     printf("Enter a no\n");
//     scanf("%d",&n);
//     i=n;
//     while (i>0)
//     {
//         b=i%10;
//         a=a+b*b*b;
//         i=i/10;
//     }
//     if (n==a)
//     {
//         printf("%d is a armstrong no\n",n);
//     }
//     else
//     {
//         printf("%d is not armstrong no\n",n);
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a no\n");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
    printf("%d\n",i);
    }
    return 0;
}
