//Check number is negative positive or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to check \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive",n);
    }
    else if(n<0)
    {
        printf("%d is negative",n);
    }
    else if(n==0)
    {
        printf("%d is zero",n);
    }
    else
    {
        printf("enter valid number");
    }
}