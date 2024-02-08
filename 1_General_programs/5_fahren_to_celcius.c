//Enter temp int fahrenheit and convert it into celcius.

#include<stdio.h>
int main()
{
    float fah,cel;
    printf("Enter temperature in fahrenheit \n");
    scanf("%f",&fah);
    cel=((fah-32)*(5.0/9)); // float by int or int by float gives float.4
    printf("Temperature in celcius %f",cel);
    return 0;

}