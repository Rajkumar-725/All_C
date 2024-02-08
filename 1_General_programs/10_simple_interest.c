//Enter principle,time and rate to calculate simple interst.
#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("Enter principle amount\n");
    scanf("%f",&p);
    printf("Enter time period in year\n");
    scanf("%f",&t);
    printf("Enter rate\n");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("Simple interest is %f \n",si);
    return 0;

}