//Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(i>j)
            printf("*");
            else
            printf(" ");

        }
        printf("\n");
    }
}