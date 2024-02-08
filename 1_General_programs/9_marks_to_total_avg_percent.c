//Enter marks of 5 subjects and calculate total, average, percentage.
#include<stdio.h>
int main()
{
    float a,b,c,d,e,tot=0,avg=0,per=0;
    printf("Enter marks of 5 students \n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    tot=a+b+c+d+e;
    avg=(a+b+c+d+e)/5;
    per= ((a+b+c+d+e)/500)*100;
    printf("Total marks is %f \n",tot);
    printf("Average is %f \n",avg);
    printf("Percentage is %f '\%'",per);

    
}