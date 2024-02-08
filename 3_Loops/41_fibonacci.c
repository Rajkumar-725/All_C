//program to print Fibonacci series up to n terms.
#include<stdio.h>
int main()
{
    int n,i,sum;
    int a=0,b=1;
    printf("Enter upper limit of terms to find fibonacci \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("%d \t",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
    
}