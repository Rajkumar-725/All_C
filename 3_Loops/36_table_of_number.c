// program to print table of any given number.
#include<stdio.h>
int main()
{
    int num, i=0;

    printf("Enter number \n");
    scanf("%d", &num);
    for (i =1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, (num*i));
    }
    
}