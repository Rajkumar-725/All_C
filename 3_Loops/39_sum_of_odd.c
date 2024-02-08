// program to find sum of all odd numbers between 1 to n
#include<stdio.h>
int main()
{
    int n,i=0,max=0;
    printf("Enter upper limit of number \n");
    scanf("%d",&n);
    do
    {
        if(i%2!=0)
        {
            printf("Odd numbers are %d \n",i);
            max+=i;
        }
        i++;
    } while (i<n);
    printf("The sum of all odd numbers is %d",max);
    
}