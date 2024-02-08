// program to print prime numbers from 20 to 120 and also sum those numbers and print.
/*................Prime number: A number is divided by 1 or itself */

#include<stdio.h>
int main()
{
    int i;
    for(i=20;i<=120;i++)
    {
        if(i%i==0)
        {
        printf("prime numbers are %d \n",i);
        i++;
        }
    }
    
}