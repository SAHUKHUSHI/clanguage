#include<stdio.h>
main()
{
   int a, b;
   printf("enter the value of first number");
   scanf("%d",&a);
   printf("enter the value of second number");
   scanf("%d",&b);
   if (a>b)
   {
    printf("first number is greater");
   }
  else
  {
    printf("second number is greater");
  }
//average marks
    int a1, a2, a3;
    printf("enter the marks of maths");
    scanf("%d",&a1);
    printf("enter the marks of science");
    scanf("%d",&a2);
    printf("enter the marks of english");
    scanf("%d",&a3);
    printf("average marks = %d",(a1+a2+a3)/3);

    
   
} 