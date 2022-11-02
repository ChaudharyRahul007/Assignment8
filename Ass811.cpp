 //Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=0;i<=4;i++)
    {   k='A';
        for(j=0;j<=8;j++)
        {
            if(j>=4-i && j<=4+i )
            {
                printf("%c",k);
                 j<4 ? k++: k--;
            }
            else
              printf(" ");
                      

        }
        printf("\n");
    }
}