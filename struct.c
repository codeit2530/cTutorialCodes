// Q.) Write a program accpet your name roll and marks using by struct.
// #include<stdio.h>
// struct num
// {
//     char a[20];
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct num x;
//     printf("Enter name\n");
//     scanf("%s",&x.a);
//     printf("Enter roll\n");
//     scanf("%d",&x.roll);
//     printf("Enter marks\n");
//     scanf("%f",&x.marks);
//     printf("\n%s\n",x.a);
//     printf("%d\n",x.roll);
//     printf("%f\n",x.marks);
//     return 0;
// }

// write a program accpet the two find the sum using by struct.
// #include<stdio.h>
// struct shiv 
// {
//     int x,y;
// };
// int main()
// {
//     struct shiv a;
//     printf("enter two number\n");
//     scanf("%d%d",&a.x,&a.y);
//     printf("sum is =%d\n",a.x+a.y);
//     return 0;
// }

// Q.)write a program accpet two number find the greater using by struct
// #include<stdio.h>
// struct greater
// {
//     int a,b;
// };
// int main()
// {
//     struct greater c;
//     printf("enter two number\n");
//     scanf("%d%d",&c.a,&c.b);
//     if (c.a>c.b)
//     {
//         printf("%d is a greater number\n",c.a);
//     }
//     else
//     {
//     printf("%d is a greater number\n",c.b);
//     }
//     return 0;
// }

// Q.)write a program accpet a number find the factorial using by struct
// #include<stdio.h>
// struct fact
// {
//     int a,f;
// };
// int main()
// {
//     int i;
//     struct fact x;
//     printf("enter a number\n");
//     scanf("%d",&x.a);
//     x.f=1;
//     for ( i=1;i<=x.a;i++)
//     {
//         x.f=x.f*i; 
//     }
//     printf("factorial=%d\n",x.f);
//     return 0;
// }

// Q.) write a program accpet two no find the sum using for loop struct
#include<stdio.h>
struct sum
{
    int a[2];
};
int main()
{
    int i,s=0;
    struct sum x;
    printf("enter a number\n");
    for (i =0; i <2; i++)
    {
        scanf("%d",&x.a[i]);
    }
    for (i =0; i <2; i++)
    {
        s=s+x.a[i];
    }
    printf("sum=%d\n",s);
    return 0;
} 

// Q.)
// #include <stdio.h>
// struct student 
// {
//     char name[100];
//     int roll[5];
//     float marks[5];
// };
// int main() 
// {
//     int i;
//     struct student s;
//     for (i=0; i<5; i++)
//     {
//     printf("Enter name\n");
//     scanf("%s",&s.name[i]);
//     printf("Enter roll number\n");
//     scanf("%d", &s.roll[i]);
//     printf("Enter marks\n");
//     scanf("%f", &s.marks[i]);
//     }
//     for(i=0; i<5; i++)
//     {
//     printf("Name\n");
//     printf("%s\n",s.name[i]);
//     printf("Roll number\n%d\n",s.roll[i]);
//     printf("Marks\n %.1f\n",s.marks[i]);
//     }
//     return 0;
// }