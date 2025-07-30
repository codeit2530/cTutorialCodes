// Q.)write a program print name, roll no. and five subject obtaned marks find total marks and percentage.
//  the percentage is greater than 80 is obtained A gread or grater than 60 percente is obtanide B grade, 
// grater than 30 percente is obtained C grade other wise d grade.

#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    float maths,physics,chemistry,english,hindi;
    char string [20];
    printf("Enter your name\n");
    scanf("%s",&string);
    printf("Enter your roll no..\n");
    scanf("%d",&a);
    printf("Enter your maths marks\n");
    scanf("%f",&maths);
    printf("Enter your physic marks\n");
    scanf("%f",&physics);
    printf("Enter your chemistry marks\n");
    scanf("%f",&chemistry);
    printf("Enter your english marks\n");
    scanf("%f",&english);
    printf("Enter your hindi marks\n");
    scanf("%f",&hindi);
    int total=maths+physics+chemistry+english+hindi;
    printf("you name is=%s\n",string);
    printf("Your Roll no. is= %d\n",a);
    printf("Your total marks is=%d\n",total);
    float per=(total*100)/500;
    printf("Your percentage is =%0.2f\n",per);
    if (per>80)
    {
        printf("Your grade is A\n");
    }
    else if (per>60)
    {
        printf("Your grade is B\n");
    }
    else if (per>30)
    {
        printf("Your grade is C\n");
    }
    else
    {
        printf("Your grade is D\n");
    }
    return 0;
}