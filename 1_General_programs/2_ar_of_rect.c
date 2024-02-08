//Enter length and breadth of rectangle and find its area.
//date: 09/02/2022

#include<stdio.h>
int main()
{
    int l,b,area=0;
    printf("Enter length and breadth");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area=%d",area);
}