#include <stdio.h>

int main()
{

    int i, j, k;

    // 1
    for (i = 41; i <= 45; i++)

    {
        for (j = 41; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // 3
    for (i = 5; i >= 1; i--)
    {

        for (k = i; k > 1; k--)
        {
            printf(" ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // 4

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 5

    for (i = 5; i >= 1; i--)
    {

        for (k = i; k > 1; k--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        for (k = 4; k >= i; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    //6
   
for(i=1;i<=5;i++)                                                                                            
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=i;k<=4;k++)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
         printf("\n");
}
//7
for(i=1;i<=5;i++)
{
    
        if(i==1 || i==3)
        {
            printf("* * * * *");
        }
        else if(i==2)
        {
            printf("*       *");
        }
        else
        {
            printf("*");
        }
         printf("\n");
    }
   
}
   