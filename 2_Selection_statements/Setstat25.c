//program to input week number and print week day.

#include <stdio.h>

int main()
{
    int wk;
    printf("Enter week number (1-7): ");
    scanf("%d", &wk);

    if(wk == 1)
    {
        printf("Monday");
    }
    else if(wk == 2)
    {
        printf("Tuesday");
    }
    else if(wk == 3)
    {
        printf("Wednesday");
    }
    else if(wk == 4)
    {
        printf("Thursday");
    }
    else if(wk == 5)
    {
        printf("Friday");
    }
    else if(wk == 6)
    {
        printf("Saturday");
    }
    else if(wk == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}