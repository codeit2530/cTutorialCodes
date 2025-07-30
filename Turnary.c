#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no\n");
    scanf("%d",&a);
    printf("Enter second no\n");
    scanf("%d",&b);
    printf("Enter third no\n");
    scanf("%d",&c);
    int s=a>b?a>c?a:c:b>c?b:c;
    printf("%d is greater no\n",s);
    return 0;
}