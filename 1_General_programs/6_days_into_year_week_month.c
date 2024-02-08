//Convert days into years,week and month.

#include<stdio.h>
int main()
{
    int day,yr,wk,mnt;
    printf("Enter no of days \n");
    scanf("%d",&day);
    yr=(day/365);
    wk=(day/7);
    mnt=(day/30);
    printf("Total number of days %d \n",day);
    printf("Total number of week %d \n",wk);
    printf("Total number of month %d \n",mnt);
    printf("Total number of year %d",yr);
    return 0;


}