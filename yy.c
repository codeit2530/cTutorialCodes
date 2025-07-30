#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter a nume\n");
    scanf("%s",&name);
    for (int i = 0; i < 100000; i++)
    {
        printf("%s\t",name);
    }
    return 0;
}