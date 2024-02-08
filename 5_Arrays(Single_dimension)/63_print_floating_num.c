// program to read 10 floating values from the user and print the same using an array.
#include<stdio.h>
int main()
{
    float num[10];//array declaration
    int i;
    printf("Enter number (in floating data-type) \n ");

//reading the value
    for (i=0; i<10; i++)
    {
        scanf("%f", &num[i]);
    }

//printing the value
    for (i=0; i<10; i++)
    {
        printf("%f \n",num[i]);
    }
    
    return 0;
    
}