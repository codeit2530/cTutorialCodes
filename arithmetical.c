// #include<stdio.h>
// int main()
// {
//     int maths,physics,chemistry,english,hindi;
//     printf("Enter maths marks\n");
//     scanf("%d",&maths);
//     printf("Enter physics marks\n");
//     scanf("%d",&physics);
//     printf("Enter chemistry marks\n");
//     scanf("%d",&chemistry);
//     printf("Enter english marks\n");
//     scanf("%d",&english);
//     printf("Emter hindi marks\n");
//     scanf("%d",&hindi);
//     int total=maths+physics+chemistry+english+hindi;
//     printf("Total result is=%d\n",total);
//     float pre=total*100/500;
//     printf("Total precentage is=%f\n",pre);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float bs,hra,da,pf,gs,s;
//     printf("Enter a basic sallary\n");
//     scanf("%f",&bs);
//     printf("Enter your hra\n");
//     scanf("%f",&hra);
//     printf("Enter your da\n");
//     scanf("%f",&da);
//     printf("enter your pf\n");
//     scanf("%f",&pf);
//     hra=bs*hra/100;
//     da=bs*da/100;
//     pf=bs*pf/100;
//     bs=bs+hra+da+pf;
//     printf("your sallary is=%f\n",s);
//     gs=bs-pf;
//     printf("your gross sallary is=%f\n",gs);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float bs,hra,da,pf,gs;
//     printf("Enter basic sallary\n");
//     scanf("%f",&bs);
//     hra=bs*20/100;
//     da=bs*15/100;
//     pf=bs*25/100;
//     bs=bs+hra+da+pf;
//     printf("total sallary=%.2f\n",bs);
//     gs=bs-pf;
//     printf("total gross sallary=%.2f\n",gs);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float amount,rate,time,si;
//     printf("Enter amount\n");
//     scanf("%f",&amount);
//     printf("Enter rate\n");
//     scanf("%f",&rate);
//     printf("Enter time\n");
//     scanf("%f",&time);
//     si=(amount*rate*time)/100;
//     printf("simple intrest=%.2f\n",si);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int b,h;
//     printf("enter base\n");
//     scanf("%d",&b);
//     printf("Enter height\n");
//     scanf("%d",&h);
//     int s=(1*b*h)/2;
//     printf("area of trinagle is=%d\n",s);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter how many mintues convet in second\n");
//     scanf("%d",&a);
//     int sec=a*60;
//     printf("%d mintues=%d seconds",a,sec);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three number\n");
//     scanf("%d%d%d",&a,&b,&c);
//     int max= a>b?a>c?a:c:b>c?b:c;
//     printf("the number is greater= %d\n",max);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a number\n");
//     scanf("%d",&year);
//     (year%4==0 && year%100!=0)||(year%400==0)?
//     printf("%d is a leap year\n",year):
//     printf("%d is not a leap year\n",year);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a=5,b=8;
    printf("%d\n",(a<b)&&(a>b));
    return 0;
} 