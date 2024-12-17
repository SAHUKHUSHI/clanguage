#include<stdio.h>
int main()
{
    //length 1d array
    int n, i;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter value");
        scanf("%d",&a[i]);
    }
    printf("length of array is %d",n);

    // average of array
    int n1, i1, b = 0;
    printf("/nenter the number of elements in the array");
    scanf("%d",&n1);
    int c[n1];
    for(i1=0;i1<n1;i1++)
    {
        printf("enter value");
        scanf("%d",&c[i1]);
        b = b + c[i1];
        }
        printf("average of array is %d",b/n1);

    //  sum of two Array
    int n3, i3;
    printf("enter the number of elements of a3");
    scanf("%d",&n3);
    int a3[n3];
    for(i3=0;i3<n3;i3++)
    {
        printf("enter value");
        scanf("%d",&a3[i3]);
    }

    
    int i4, n4;
    printf("enter the number of elements of a3");
    scanf("%d",&n4);
    int a4[n4];
    for(i4=0;i4<n4;i4++)
    {
        printf("enter value");
        scanf("%d",&a4[i4]);
    }
    int a5[n4];
    for(i4=0;i4<n4;i4++)
    {
        a5[i4] = a3[i4] + a4[i4];
        }
        printf("sum of two array");
        for(i4=0;i4<n4;i4++)
        {
            printf("%d",a5[i4]);
        }  
        }