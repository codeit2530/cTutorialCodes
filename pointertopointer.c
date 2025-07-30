#include<stdio.h>
int main()
{
    int a=25,*p,**q;
    p=&a;
    q=&p;
    printf("the value of a is= %d\n",a);
    printf("the address of a is= %d\n",&a);
    printf("the value of p is= %d\n",p);
    printf("The address of p is= %d\n",&p);
    printf("The value a gose to p is= %d\n",*p);
    printf("The value of q is= %d\n",q);
    printf("The address of pt is= %d\n",&q);
    printf("the value of a gose to q is= %d\n",**q);
    return 0;
}