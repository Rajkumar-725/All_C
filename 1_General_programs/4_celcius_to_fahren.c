//Enter temp into Celcius and convert it into Fahrenheit.
//date: 09/02/2023

#include<stdio.h>
int main()
{
    float cel=0, fahren=0;
    printf("Enter temperature into celcius \n");
    scanf("%f",&cel);
    fahren=((9/5.0)*cel)+32;
    printf("Temperature in fahrenheit is %f",fahren);
    return 0;

}