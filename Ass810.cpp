 //Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=3;i++)
    {   k=1;
        for(j=0;j<=6;j++)
        {
            if(j<=3-i||j>=3+i )
            {
                printf("%d",k);
                 j<3?k++:k--;
            }
            else
            {
              printf(" ");
              if(j==4)
              k--;
            }
         

        }
        printf("\n");
    }
}