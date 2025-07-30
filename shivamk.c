// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("Enter year\n");
//     scanf("%d",&year);
//     if (year%100==0)
//     {
//         if (year%400==0)
//         {
//             printf("%d is a leap year\n",year);
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
//             printf("%d is a leap year\n",year);
//         }
//         else
//         {
//             printf("%d is not a leap year\n",year);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two number\n");
//     scanf("%d%d",&a,&b);
//     if (a>b)
//     {
//         printf("subtract is = %d\n",a-b);
//     }
//     else
//     {
//         printf("subtract is = %d\n",b-a);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,i=2,j=2;
//     printf("Enter two number\n");
//     scanf("%d%d",&a,&b);
//     if (a>=11111||b>=11111)
//     {
//     goto end;
//     }
//     printf("you enter 1st number is %d\n",a);
//     printf("\nyou enter 2nd number is %d\n",b);
//        if (a<=99)
//        {
//            if (a<=9)
//            {
//                printf("\n%d is a 1 digit number\n",a);
//            }
//            else
//            {
//                printf("\n%d is a 2 digit number\n",a);
//            }
//        }
//        else
//        {
//            if (a<=999)
//            {
//                printf("\n%d is a 3 digit number\n",a);
//            }
//            else
//            {
//                printf("\n%d is a 4 digit number\n",a);
//            }
//         }
//        if(b<=99)
//        {
//            if (b<=9)
//            {
//                printf("\n%d is a 1 digit number\n",b);
//            }
//            else
//            {
//                printf("\n%d is a 2 digit number\n",b);
//            }
//        }
//        else
//        {
//            if (b<=999)
//            {
//                printf("\n%d is a 3 digit number\n",b);
//            }
//            else
//            {
//                printf("\n%d is a 4 digit number\n",b);
//            }
//        }
//     if (a>=0)
//     {
//         printf("\n%d is postive number\n",a);
//     }
//     else
//     {
//         printf("\n%d is negative number\n",a);
//     }
//     if (b>=0)
//     {
//         printf("\n%d is postive number\n",b);
//     }
//     else
//     {
//         printf("\n%d is negative number\n",b);
//     }
//     if (a%2==0)
//     {
//         printf("\n%d is a even number\n",a);
//     }
//     else
//     {
//         printf("\n%d ia a odd number\n",a);
//     }
//     if (b%2==0)
//     {
//         printf("\n%d is a even number\n",b);
//     }
//     else
//     {
//         printf("\n%d ia a odd number\n",b);
//     }
//     while (i<=a)
//     {
//         if (a%i==0)
//         {
//             break;
//         }
//         i++;
//     }
//     if (i==a)
//     {
//         printf("\n%d is a prime number\n",a);
//     }
//     else
//     {
//         printf("\n%d is not a prime number\n",a);
//     }
//     while (j<=b)
//     {
//         if (b%j==0)
//         {
//             break;
//         }
//         j++;
//     }
//     if (j==b)
//     {
//         printf("\n%d is a prime number\n",b);
//     }
//     else
//     {
//         printf("\n%d is not a prime number\n",b);
//     }
//     printf("\nthe sum is = %d\n",a+b);
//     return 0;
//     end:
//     printf("sorry\n");
//     printf("plz enter less than 5 digit number\n");
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     printf("prime number 1 to 20\n");
//     for (i=0;i<21;i++)
//     {
//         for (j=2;j<=i;j++)
//         {
//             if (i%j==0)
//             {
//                 break;
//             }
//         }
//         if (i==j)
//         printf("%d is a prime number\n",i);
//         else
//         {
//             printf("%d is not a prime number\n",i);
//         }
//     printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,i,n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     i=n;a=0;
//     while (i>0)
//     {
//         b=i%10;
//         a=a+b*b*b;
//         i=i/10;
//     }
//     if (a==n)
//     {
//         printf("%d is armstrong number\n",n);
//     }
//     else
//     {
//         printf("%d is not armstrong number\n",n);
//     }
//     return 0;
// }

// fibonacci number
// #include<stdio.h>
// int main()
// {
//     int a,b,i,n;
//     printf("Enter a number\n");
//     scanf("%d",&n);
//     a=0,b=1,i=0;
//     while (i<n)
//     {
//         a=b;
//         b=i;
//         i=a+b;
//     }
//     if (i==n)
//     {
//         printf("%d is fibonacci number\n",n);
//     }
//     else
//     {
//         printf("%d is not fibonacci number\n",n);
//     }
//     return 0;
// }

// palidron
// #include<stdio.h>
// int main()
// {
//     int n,i,r,a=0;
//     printf("Enter a number\n");
//     scanf("%d",&n);
//     i=n;
//     while (i>0)
//     {
//         r=i%10;
//         a=r+(a*10);
//         i=i/10;
//     }
//     if (a==n)
//     {
//         printf("%d is a palindron number\n",n);
//     }
//     else
//     {
//         printf("%d is not a palindron number\n",n);
//     }
//     return 0;
// }

// Q) Write a program read 1 to 100 number and find sum.
// #include<stdio.h>
// int main()
// {
//     int i=1,s=0;
//     while (i<=100)
//     {
//         s=s+i;
//         i++;
//     }
//     printf("total=%d",s);
//     return 0;
// }

// Q) Write a program accpet 10 number and find sum.
// #include<stdio.h>
// int main()
// {
//     int i,a,s=0;
//     printf("enter 10 number\n");
//     i=1;
//     while (i<=10)
//     {
//         scanf("%d",&a);
//         s=s+a;
//         i++;
//     }
//     printf("the sum is=%d\n",s);
//     return 0;
// }

// Q)Write a program accpet 10 number and find which are greaternot using array.
// #include<stdio.h>
// int main()
// {
//     int i=1,a,s;
//     printf("enter 10 no\n");
//     scanf("%d",&s);
//     while (i<10)
//     {
//         scanf("%d",&a);
//         if (a>s)
//         {
//             s=a;
//         }
//         i=i+1;
//     }
//     printf("%d is greater number\n",s);
//     return 0;
// }

// Q)write a program accpet two no find the sum,sub,mul,div.
// #include<stdio.h>
// int main()
// {
//     int a,b,s;
//     printf("enter two no\n");
//     scanf("%d%d",&a,&b);
//     s=a+b;;
//     printf("sum=%d\n",s);
//     s=a-b;
//     printf("sub=%d\n",s);
//     s=a*b;
//     printf("mul=%d\n",s);
//     s=a/b;
//     printf("divide=%d\n",s);
//     return 0;
// }

// Q.) write a program accpet price of any book and find the price after discount 25%
// #include<stdio.h>
// int main()
// {
//     int book,a;
//     printf("Enter price of book\n");
//     scanf("%d",&book);
//     a=(book*25)/100;
//     book=book-a;
//     printf("Total price of a book=%d",book);
//     return 0;
// }

// Q.) write a program to replace all 0's withs 1 in a number
// #include <math.h>
// #include <stdio.h>
// int main()
// {
//     int N = 1002350;
//     int ans = 0;
//     int i = 0;
//     // printf("Enter a number\n");
//     // scanf("%d",&n);
//     while (N != 0)
//     {
//         if (N % 10 == 0)
//             ans = ans + 1 * pow(10, i);
//         else
//             ans = ans + (N % 10) * pow(10, i);
//         N = N / 10;
//         i++;
//     }
//     printf("%d\n", ans);
//     return 0;
// }

// Q.) write a program to convert the binary to convert the decimal number.
// #include<stdio.h>
// int main()
// {
//     int i,a=1,r=0;
//     printf("enter binary number\n");
//     scanf("%d",&i);
//     while (i!=0)
//     {
//         r=r+(i%10)*a;
//         i=i/10;
//         a=a*2;
//     }
//     printf("Decimal number is= %d\n",r);
//     return 0;
// }

// Q.) writw a program find the gcd of two number.
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a,b,i;
//     printf("Enter a number\n");
//     scanf("%d%d",&a,&b);
//     i=((a<b)?a:b);
//     while (i>0)
//     {
//         if (a%i==0 && b%i==0)
//         {
//             break;
//         }
//         i--;
//     }
//     printf("gcd of %d and %d is=%d\n",a,b,i);
//     return 0;
// }
