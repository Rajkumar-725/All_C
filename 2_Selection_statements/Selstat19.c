//find maximum between two numbers
#include<stdio.h>
int main()
{
    int a,b,max=0;

//taing input
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);

//updating in max
    if(a>b)
    max=a;
    else
    max=b;

//printing values
    printf("The maximum is %d",max);
    return 0;
}