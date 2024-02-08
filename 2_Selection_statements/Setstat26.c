//program to input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int mon;
    printf("Enter month number \n");
    scanf("%d",&mon);
    
    if(mon==1)
    printf("Number of days in january is 31");
    else if(mon==2)
    printf("Number of days in february is 28");
    else if(mon==3)
    printf("Number of days in march is 31");
    else if(mon==4)
    printf("Number of days in april is 30");
    else if(mon==5)
    printf("Number of days in may is 31");
    else if(mon==6)
    printf("Number of days in june is 30");
    else if(mon==7)
    printf("Number of days in july is 31");
    else if(mon==8)
    printf("Number of days in august is 31");
    else if(mon==9)
    printf("Number of days in september is 30");
    else if(mon==10)
    printf("Number of days in october is 31");
    else if(mon==11)
    printf("Number of days in november is 30");
    else if(mon==12)
    printf("Number of days in december is 31");

}