//#include<stdio.h>
//int main()
//{
//    int a=10;
//    void *pt=&a;
//    printf("%d\n",*(int*)pt);
//    return 0;
//}

#include<stdio.h>
int main()
{
    int a,b;
    void *p=&a;
    void *q=&b;
    printf("Enter a number\n");
    scanf("%d%d",&a,&b);
    printf("your enter a value is= %d\nyou enter b value is= %d\n",*(int*)p,*(int*)q);
    printf("(a+b)^2= %d\n",a*a+b*b+2*a*b);
    return 0;
}

