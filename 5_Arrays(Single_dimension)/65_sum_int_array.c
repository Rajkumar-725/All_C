//program to sum integer elements of an array of size 10.
#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
// reading values

    printf("Enter number \n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d", &num[i]);
        sum+=num[i];
    }

    printf("sum is all the values are %d",sum);


    
}