#include<stdio.h>
main()
{
    int a;
    printf("Enter your score:");
    scanf("%d",&a);

    (a>=100 && a<=90)?
    printf("Your grade is A, Excellent work"):
    (a<=89 && a>=80)?
    printf("Your grade is B, Well done"):
    (a<=79 && a>=70)?
    printf("Your grade is C, Good job"):
    (a<=69 && a>=60)?
    printf("Your grade is D, You passed, but you could do better")
    :printf("Your are passed");

    // int b;
    // printf("\nEnter your grade");
    // scanf("%d",&b);

switch(a)
{
    case 'A':
    printf("Excellent Work");
    break;
    case 'B':
    printf("Well done");
    break;
    case 'C':
    printf("Good job");
    break;
    case 'D':
    printf("You passed, but you could do better");
    break;
    case 'E':
    printf("Sorry, you failed");
    break;
}
}