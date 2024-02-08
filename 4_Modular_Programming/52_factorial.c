//Write a user defined function to calculate factorial of any given number.
 #include<stdio.h>

 int fact(int n) // (fact)user defined function.
 {
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
 }
 int fact(int n);
 int main()
 {
    int n,result;
    printf("Enter number to find factorial \n");
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial is %d",result);
 }