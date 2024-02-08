//  program to find sum of all even numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i=0, sum=0;
    printf("Enter number \n ");
    scanf("%d",&n);
    do
    {
        if(i%2==0)
        {
        printf("Even numbers are \t %d \n",i);
        sum= sum+i; //or sum+=i it also means sum=sum+1;
        }
        i++;
    }
    while (i<=n);
    printf("The sum of all the even numbers  is \t %d",sum);
    
    
}