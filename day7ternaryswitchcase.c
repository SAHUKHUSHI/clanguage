#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

      (a>b)?//if
      (a>c)?//if
       printf("A is maximum value")
       ://else
       printf("C is maximum value")
    ://else
    (b>c)?//if
    printf("B is maximum value")
    ://else
    printf("C is maxium value");

    //2
    int a;
    printf("Enter the value a:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Internet recharge");
        break;
        case 2:
        printf("Top-up recharge");
        break;
        case 3:
        printf("Special recharge");
        break;
    }

    //3
 
int b;
    printf("Enter the value B:");
    scanf("%d",&b);
    switch(b)
    {
        case 1:
        printf("HINDI");
        break;
        case 2:
        printf("ENGLISH");
        break;
        case 3:
        printf("SCIENCE");
        break;
        case 4:
        printf("MATHS");
        break;
        case 5:
        printf("SOCIAL SCIENCE");
        break;
    }

}
