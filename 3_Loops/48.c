/*
Read two numbers. Multiply them. If multiplication is more than 433 then reverse it and print the number. If 
multiplication is less than 433 sum the digits of number and print the result.
*/

#include<stdio.h>
int main()
{
    int a,b,i=0,mul=0,remainder;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("multiplied number is %d", mul);
    while (i<mul)
    {
        remainder=mul%10;
        remainder=remainder*10+remainder;
        mul=mul/10;
    }
    printf("Reverse of multiplied number is %d",remainder);
    return 0;


}