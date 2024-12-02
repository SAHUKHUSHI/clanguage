#include<stdio.h>
main()
 {
   float temp, fahrenheit;
   printf("enter temp in celsius");
   scanf("%f",&temp);
   fahrenheit = (9/5 * temp) + 32;
   printf("the value of fahrenheit is %f",fahrenheit);

   //2 

   float HRA, DA, TA, salary, gross_salary;
   printf("enter HRA");
   scanf("%f",&HRA);

   printf("enter DA");
   scanf("%f",&DA);

   printf("enter TA");
   scanf("%f",&TA);
   
   printf("enter salary");
   scanf("%f",&salary);
   gross_salary = salary + salary*HRA/100 + salary*DA/100 + salary*TA/100;
   printf("the gross salary is %f",gross_salary);

//3

float a1,a2,a3,a4;
printf("enter a1");
scanf("%f",&a1);

printf("enter a2");
scanf("%f",&a2);

a4 = a1 + a2;
a3 = 180 - a4;

printf("the value of a3 is %f",a3);
}