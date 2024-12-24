#include<stdio.h>
int main ()
{
 // //average of 2d array
    int i,j,n1,n2,sum=0,avg;
    // printf("Enter the array's row size:");
    // scanf("%d",&n1);
    // printf("Enter the array's column size:");
    // scanf("%d",&n2);
    // int a[n1][n2];
    // printf("Enter the array elements:\n");
    // for(i=0;i<n1;i++)
    // {
    //     for(j=0;j<n2;j++)
    //     {
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    // for(i=0;i<n1;i++)
    // {
    //     for(j=0;j<n2;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    //  for(i=0;i<n1;i++)
    // {
    //     for(j=0;j<n2;j++)
    //     {
    //         sum = sum + a[i][j];
    //     }
    // }
    // avg = sum / (n1 * n2);
    // printf("The average is %d\n",avg);

//2 elements of 2d array
    int x,y;
    int x1,y1;
    int x2,y2;
    // //first
    // printf("Enter the row size:");
    // scanf("%d",&x);
    // printf("Enter the column size:");
    // scanf("%d",&y);
    // printf("Enter the element");
    // int b[x][y];
    // int c[x][y];
    // int d[x][y];

    // for(i=0;i<x;i++)
    // {
    //     for(j=0;j<y;j++)
    //     {
    //         scanf("%d",&b[i][j]);
    //     }
    // }
    // //second
    // printf("\nEnter element in c:");
    // for(i=0;i<x;i++)
    // {
    //     for(j=0;j<y;j++)
    //     {
    //        scanf("%d",&c[i][j]); 
    //     }
    // }
    // //sum 
    // for(i=0;i<x;i++)
    // {
    //     for(j=0;j<y;j++)
    //     {
    //        d[i][j] = b[i][j] + c[i][j];
    //     }
    // }
    // for(i=0;i<x;i++)
    // {
    //     for(j=0;j<y;j++)
    //     {
    //         printf("%d ",d[i][j]);
    //    }
    //    printf("\n");
    // }

    //3 
    //first
    int d1 = 0;
    printf("Enter the row size:");
    scanf("%d",&x);
    printf("Enter the column size:");
    scanf("%d",&y);
    printf("Enter the element");
    int b[x][y];
    int c[x][y];
    int d[x][y];

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        d1=d1+b[i][i];
    }
    printf("sum of diagonal is %d",d1);
} 