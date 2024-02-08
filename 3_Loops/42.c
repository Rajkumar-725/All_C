/*
program to read a number from the keyboard. Check this number is even or odd. If number is odd then check 
whether it is greater than 5 or not. If number is greater than 5 then calculate its factorial, otherwise print the terms (equal 
to the number) of Fibonacci series. If given number is even then sum all the numbers below this number. 
*/

int fact(int num) //function definition
{
    if(num==1)
    return 1; //base condition
    else 
    return num*fact(num-1);// recursive definition
}
int fact(int n); //function declaration
#include<stdio.h>
int main()
{
    int num,factorial;
    int i,sum,a=0,b=1;
    printf("Enter number \n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Number is even \n");

    }

    else if (num%2!=0)
    {
        printf("Number is odd \n");
        if(num>5)
        {
            factorial=fact(num); //function calling
            printf("Factorial of number is %d",factorial);
        }
        else
        {
            a=num;
            for ( i = 0; i < num; i++)
                {
                    printf("%d \t",a);
                    sum=a+b;
                    a=b;
                    b=sum;
                }
        }
    }
    
}