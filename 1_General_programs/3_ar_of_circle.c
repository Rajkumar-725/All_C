//Enter radius of circle and find its Area, Diameter and Circumference.
//date: 09/02/2023

#include<stdio.h>
int main()
{
    float r,ar,di,cr; //"a, ar, di, cr" are for 'radius, area, diameter and circumference resp.
    printf("Enter radius of circle\n");
    scanf("%f",&r);
    ar=3.14*r*r;
    di=2*r;
    cr=2*3.14*r;
    printf("Area=%f\n",ar);
    printf("Diameter=%f\n",di);
    printf("Circumference=%f\n",cr);

}