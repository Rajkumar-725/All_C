//check leap yr of not?
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter year to check");
    scanf("%d",&yr);
    if(yr%4==0)
    printf("Year is leap year");
    else
    printf("Year is not a leap year");

    return 0;
}