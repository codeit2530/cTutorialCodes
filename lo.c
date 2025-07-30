#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,k;
    for (k=1;k<=100;k++)
    {
        for (i=39;i>=-39;i--)
        {
            for (j=-35;j<=35;j++)
            {
                if ((abs(i-25)<14&&abs(j)<6
                ||(abs(i-25)==13&&abs(j)<10))
                ||(pow(abs(j)-9,2)+2*pow(i,2)<=100)
                ||(9*abs(j)-14*i-210<=0&&i<=-3)
                ||(pow(j,2)+2*pow(i+30,2)<=225&&
                pow(j,2)+2*pow(i+30,2)>=64&&i<-29)
                ||(abs(abs(j)-11.5)<3.5&&abs(i+23)<7))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
