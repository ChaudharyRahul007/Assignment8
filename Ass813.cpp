 //Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j;
    char  k;
    for(i=0;i<=6;i++)
    {   k='A';
        for(j=0;j<=12;j++)
        {
            if(j<=6-i || j>=6+i)
            {
                printf("%c",k);
                 j<6?k++:k--;
            }
            else
            {
                 printf(" ");  
                 if(j==6)
                 k--;
            }     

        }
        printf("\n");
    }
}