//program to read 10 different integer values and print the all values that are greater than 7.
#include<stdio.h>
int main()
{
    int num[10],i;
    printf("Enter numbers \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (num[i]>7)
        {
            printf("%d \t",num[i]);
        }
        
    }

    
    
}