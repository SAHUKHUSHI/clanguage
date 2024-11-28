#include<stdio.h>
main()
{
    //AREA OF CIRCLE 
    const float pie = 3.14;
    float r; 
    float ans;
    printf("Enter the value of r");
    scanf("%f",&r);
    ans = pie * r * r;
    printf("The area of circle is %f",ans);
        

    // AREA OF RECTANGLE
    float l;
    float ans1;
    printf("\n\nEnter the value of l");
    scanf("%f",&l);
    ans = l * l;
    printf("the area of rectangle is %f",ans1);


    //AREA OF TRIANGLE
    float b;
    float h;
    float ans2;
    printf("\n\nEnter the vaule of b");
    scanf("%f",&b);
    printf("Enter the value of h");
    scanf("%f",&h);
    ans2 = 1/2 * b * h;
    printf("the area of triangle is %f", ans2);


    //FIND SIMPLE INTEREST 
    float p;
    float r1;
    float n;
    float ans3;
    printf("\n\nEnter the value of p");
    scanf("%f",&p);
    printf("enter the value of r");
    scanf("%f",&r);
    printf("Enter the value of n");
    scanf("%f",&n);
    ans3 = p * r * n;
    printf("the simple interest is %f",ans3);

    //PERIMETER OF CIRCLE
    float r2;
    float ans4;
    printf("\n\nEnter the value of r2");
    scanf("%f",&r2);
    ans = 2 * pie * r;
    printf("the perimeter of circle is %f",ans4);




}


