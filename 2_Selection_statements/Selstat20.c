/*check whether a given number is even or odd. If given number is odd check whether it is greater 
than 7.If number is greater than 7 calculate its cube otherwise calculate its square and print the result. If number is even 
check whether it is greater than 9.If it is greater than 9 then multiply it by 6 and print the result otherwise divide it by 5 
and print the result.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number \n");
    scanf("%d",&n);

//checking even or odd
    if(n%2==0)
    {
        printf("Number is even %d \n",n);
        if(n>9)
        printf("After multiplied by 6 %d \n",(n*6));

        else
        printf("After division by 5 %d \n",(n/5));
    }



    else
    {
        printf("Number is odd %d \n",n);
        if(n>7)
        {
            printf("Cube of number is %d \n",(n*n*n));
        }
        else
        {
            printf("Square of number is  %d \n",(n*n));

        }
    }
    return 0;
}
