//Enter base and height of triangle and find its area.
#include<stdio.h>
int main()
{
    float b,h,ar;
    printf("Enter base and height of triangle \n");
    scanf("%f%f",&b,&h);
    ar=(float)(1/2.0)*b*h;
    printf("Area of triangle is %f",ar);
    return 0;

}