//program print total number of days in a month using switch case.
#include<stdio.h>
int main()
{
    int mon;
    printf("Enter month number \n");
    scanf("%d",&mon);
    
switch (mon)
{
    case 1:
    {
       printf("Number of days in january is 31");
        break;
    }

    case 2:
    {
       printf("Number of days in february is 28");
        break;
    }

    case 3:
    {
       printf("Number of days in march is 31");
        break;
    }

    case 4:
    {
       printf("Number of days in april is 30");
        break;
    }

    case 5:
    {
       printf("Number of days in may is 31");
        break;
    }

    case 6:
    {
       printf("Number of days in june is 30");
        break;
    }

    case 7:
    {
       printf("Number of days in july is 31");
        break;
    }

    case 8:
    {
       printf("Number of days in august is 31");
        break;
    }

    case 9:
    {
       printf("Number of days in september is 30");
        break;
    }

    case 10:
    {
       printf("Number of days in october is 31");
        break;
    }

    case 11:
    {
       printf("Number of days in november is 30");
        break;
    }

    case 12:
    {
       printf("Number of days in december is 31");
        break;
    }

}
}