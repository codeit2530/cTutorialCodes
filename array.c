#include<stdio.h>
int main()
{
    float a[5];
    printf("Enter 5 no\n");
    for(int i=0;i<5;i++)
    {
    scanf("%f",&a[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%.2f\n",a[i]);
    }
    float total=a[0]+a[1]+a[2]+a[3]+a[4];
    printf("total marks=%.2f\n",total);
    float per=total*100/500;
    printf("total percentage=%.2f\n",per);
    if (per>=80)
    {
        printf("Grade A\n");
    }
    else if (per>=60)
    {
        printf("Grade B\n");
    }
    else if (per>=30)
    {
        printf("grade C\n");;
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}

// #include<stdio.h>
// int main()
// { 
//     int i,j,b,a[10];
//     printf("enter 10 number\n");
//     for (i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (i=0;i<10;i++)
//     {
//         for (j=i+1;j<10;j++)
//         {
//             if (a[i]>a[j])
//             {
//                 b=a[i];
//                 a[i]=a[j];
//                 a[j]=b;
//             }          
//         }
//     }
//     printf("The number arrange in ascending order are given below\n");
//     for (i=0;i<10;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// { 
//     int i,j,k,b=0,a[5][4];
//     printf("enter 5 number\n");
//     for (i=0;i<5;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//         scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     for (i=0;i<5;i++)
//     {
//         for (j=0;j<4;j++)
//         {
//             for(k=0;k<4-j-1;k++)
//             {
//                if (a[i][k]<a[i][k+1])
//                 {
//                     b=a[i][k];
//                     a[i][k]=a[i][k+1];
//                     a[i][k+1]=b;
//                 }
//             }
//         }
//     }
//     printf("The number arrange in ascending order are given below\n");
//     for (i=0;i<5;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//         printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
