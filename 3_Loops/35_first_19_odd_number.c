// program to print first 19 odd numbers.

#include <stdio.h>
int main()
{
    int i=0;
    do
    {
        if(i%2!=0)
        printf("%d \n",i);
    i++;
    }
    while (i <= 19);
}
