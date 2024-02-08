//Take all sides of a triangle and check triangle is valid or not?
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 sides of a traingle \n");
    scanf("%d%d%d",&a,&b,&c);

    if( ((a+b)>=c) && ((b+c)>=a) && ((c+a)>=b) ) 
    printf("Trianle is valid");
    else 
    printf("Triangle is invalid");

    return 0;
    
}