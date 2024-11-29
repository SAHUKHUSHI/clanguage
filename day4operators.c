#include<stdio.h>
main ()
{
   int x,y,ans;

   printf("Enter the value of x and y:");
   scanf("%d%d",&x,&y);
   ans = x*x + 2*x*y + y*y;
   printf("The value of ans is %d", ans);

//2
    int a,b,ans1;

   printf("\n\nEnter the value of a and b:");
   scanf("%d%d",&a,&b);
   ans1 = a*a - 2*a*b + b*b;
   printf("The value of ans is %d", ans1);

//3
    
     int g,h,ans2;

   printf("\n\nEnter the value of g and h");
   scanf("%d%d",&g,&h);
   ans2 = g*g*g + 3*g*g*h + 3*g*h*h + h*h*h;
   printf("The value of ans2 is %d", ans2);

// 4
  
  int m,n,o;
  m = 50;
  n = 20;
  

  o = m;
  m = n;
  n = m;
  printf("The value of m and n is %d\t%d",m,o);

//5 

int o,p;
o = 40;
p = 30;
o = o + p;
p = o - p;
o = o - p;
printf("the value of o and p is %d\t%d",o,p);

}