 //Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j,n=4,m=0;
    for(i=0;i<=8;i++)
    {
        i<=n? m++:m--;
        for(j=0;j<=8;j++)
        {
            if(j>=n+1-m &&j<=n-1+m )
            printf("*");
            else
            printf(" ");

        }
        printf("\n");
    }
}