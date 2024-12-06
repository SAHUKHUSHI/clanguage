#include<stdio.h>
main()
{
    int a, grade;
    printf("Enter your score:");
    scanf("%d",&a);
    grade = 0;
    (a>=100 && a<=90)?
    printf("Your grade is A"):
    (a<=89 && a>=80)?
    printf("Your grade is B"):
    (a<=79 && a>=70)?
    printf("Your grade is C"):
    (a<=69 && a>=60)?
    printf("Your grade is D")
    :printf(".");

    // int b;
    // printf("\nEnter your grade");
    // scanf("%d",&b);

switch(grade)
{
    case 0:
    printf("Excellent Work");
    break;
    case 1:
    printf("\nWell done");
    break;
    case 2:
    printf("Good job");
    break;
    case 3:
    printf("You passed, but you could do better");
    break;
    case 4:
    printf("Sorry, you failed");
    break;
}
}