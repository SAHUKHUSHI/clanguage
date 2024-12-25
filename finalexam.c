#include<stdio.h>
void cb(int a)
    {
        int ans;
        ans=a*a*a;
        printf("%d",ans);
    }

int main()
{
     //1 find third triangle 
    int a,b,sum,ans;
    printf("Enter the value of first angle:");
    scanf("%d",&a);
     printf("Enter the value of second angle:");
    scanf("%d",&b);
    sum=a+b;
    ans=180-sum;
    printf("Third angle is %d",ans);
    printf("\n");
    
     // 2 find array elements of a matrix
    int a1,a2,sum1;
    printf("Enter the value of first element:");
    scanf("%d",&a1);
    printf("Enter the value of second element:");
    scanf("%d",&a2);
    sum1=a1+a2;
    printf("Sum of two element is %d",sum1);
    printf("\n");

    // 3 find a cube 
    int l;
    printf("Enter the value of number:");
    scanf("%d",&l);
    cb(l);
    printf("\n");
                    



    //4 pattern
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
           printf("\n");
    }
     

    //5
    int month;
    printf("Enter the month:");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("31 days");
        break;
        case 2:
        printf("28 days");
        break;
         case 3:
        printf("31 days");
        break;
        case 4:
        printf("30 days");
        break;
         case 5:
        printf("31 days");
        break;
        case 6:
        printf("30 days");
        break;
         case 7:
        printf("31 days");
        break;
        case 8:
        printf("30 days");
        break;
         case 9:
        printf("31 days");
        break;
        case 10:
        printf("30 days");
        break;
         case 11:
        printf("31 days");
        break;
        case 12:
        printf("30 days");
        break;
        
    }

    

}