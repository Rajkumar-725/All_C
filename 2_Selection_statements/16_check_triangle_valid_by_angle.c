//input angles of triangle and check triangle is valid or not?
#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter angles of a triangle \n");
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)==180)
        printf("Trianle is valid");
        else
        printf("Triangle is invalid");

        return 0;
}