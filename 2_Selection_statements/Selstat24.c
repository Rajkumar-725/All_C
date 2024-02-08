/*
program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
int main()
{
    int rs;
    float bill, gross_bill;
    printf("Enter units of electricity consumed \n");
    scanf("%d",&rs);

    if(rs<50)
    bill=rs*0.50;

    else if(rs>50 && rs<150)
    bill=rs*0.75;

    else if(rs>150 && rs<250)
    bill=rs*1.20;

    else if(rs>250)
    bill=rs*1.50;

    gross_bill=bill+(bill*0.2);
    printf("Total electricity bill is %f" ,gross_bill);

}