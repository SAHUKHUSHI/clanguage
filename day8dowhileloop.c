#include<stdio.h>
main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    } while(i<=10);

    //2
    int r=10;
    do
    {
        printf("%d\n",r);
        r--;
    } while (r>=1);
    
    //3
    
    int z = 1, y;

    printf("Enter number:");
    scanf("%d",&y);
    do
    {
        printf("%d\n",z);
        z++;
    } 
    while (z<=y);
    

    // //4
    int o;
    printf("Enter number:");
    scanf("%d",&o);
    do
    {
        
        if ( o % 2 != 0)
        {
            printf("%d\n",o);
        }
        o--;
    } while(o>=1);


    //5 leap year

    int year, year2;
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter year2 :");
    scanf("%d",&year2);
    do
    {
        if (year%4==0 && (year%100!=0 || year%400==0))
        {
            printf("%d is a leap year\n",year);
        }
        year++;
    }
    while (year<=year2);

}