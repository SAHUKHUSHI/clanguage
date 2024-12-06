#include<stdio.h>
main()
{
    int a;
    char grade;
    printf("Enter your score:");
    scanf("%d",&a);
    
    grade = (a >= 90)? 'A':
    (a >= 80)? 'B':
    (a >= 70)? 'C':
    (a >= 60)? 'D':
    'E';
    printf("Your grade is %c\n",grade);

switch(grade)
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
 //3 
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf(" \nyou are eligible for next level");
    }
    else
    {
        printf("\nyou are not eligible for next level");
    }
}