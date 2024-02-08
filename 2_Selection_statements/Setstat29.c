/*
Write a Menu Driven Program to execute following tasks):
a) Check whether a given number is even or odd.
b) Compare three numbers and print the largest.
c) Calculate roots of a quadratic equation.
d) Check whether a given year is leap year or not.
e) Locate a point on 2D plane. 
f) Default message: “Now you can explore any project idea if interested!!!”
*/

#include<stdio.h>
int main()
{ 
    int a,b,op,n;

    printf("\n.....................MENU................\n"
        "1: press 1 for check even or odd \n");
    );
    printf("Enter your choice");
    scanf("%d"),op;
    


    switch (op)
    {
    case 1:

        printf("input a number");
        scanf("%d",n);
        if(n%2==0)
        printf("Number is even");
        else
        printf("Number is odd");
        break;
    
    default:
        break;
    }
}