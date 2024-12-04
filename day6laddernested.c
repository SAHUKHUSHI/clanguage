#include<stdio.h>
main()
{
//1 ladder
    // int a;
    // printf("enter the value:");
    // scanf("%d",&a);
    
    // if(a>0)
    // {
    //     printf("A is positive");
    // }
    // else if (a==0)
    // {
    //     printf("0 is neutral");
    // }
    // else
    // {
    //     printf("A is negative");
    // }

//2 nested if else(minimum value)
    // int p, q, r;
    // printf("\n\nenter the value of p:");
    // scanf("%d",&p);
    // printf("enter the value of q:");
    // scanf("%d",&q);
    // printf("enter the value of r:");
    // scanf("%d",&r);
    
    // if(p<r)
    // {
    //     if(p<q)
    //     {
    //     printf("P is minimum value");
    //     }
    //     else
    //     {
    //     printf("Q is minimum value");
    //     }
    // }
    // else if(q<r)
    // {
    //     if(q<p)
    //     {
    //     printf("Q is minimum value");
    //     }
    //     else
    //     {
    //         printf("Q is ,inimum value");

    //     }
    // }
    // else if (p == q)
    // {
    //     if(p==r)
    //     {
    //     printf("all are equal");
    //     }
    // }
//3nested if else(maximum value)
    int  w, x, y, z;
    printf("Enter the value of w:");
    scanf("%d",&w);
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Enter the value of z:");
    scanf("%d",&z);

    if (w==x && x==y && y==z)
    {
        printf("All are equal");
    }
    else 
    {
        if(w>x)
        {
           if(w>y) 
        {
            if(w>z)
            {
               printf("W is maximum value");
            }
            else
            {
               printf("Z is maximum value");
            }
        }
        else
        {
          if(y>z)
        {
            printf("Y is maximum value");
        }
          else
        {
            printf("Z is maximum value");
        }
        }
        }
    else
    {
        if (x>y)
        {
            if(x>z)
            {
                printf("X is maximum value");
            }
            else
            {
                printf("Z ia maximum value");
            }
        }
        else    
        {
            if (y>z)
            {
                printf("Y is maximum value");
            }
            else
            {
                printf("Z is maximum value");
            }
        }
    }
    }
}            
    

    