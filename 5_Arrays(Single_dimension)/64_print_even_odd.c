/*
program to read 10 integer values from the user and print the number of even numbers and number of odd
numbers in given data
*/
#include <stdio.h>
int main()
{
    int i, num[10], even[10], odd[10], j = 0, k = 0;
    printf("Enter 10 numbers to distinguish b/w even and odd \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    // Printing
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[j++] = num[i];
            // printf("Even numbers are %d \t",num[i]);
        }
        else
            odd[k++] = num[i];
        // printf("Odd numbers are %d \t",num[i]);
    }
    printf("Even numbers are \n");
    for (i = 0; i < j; i++)
        printf("%d\t", even[i]);


    printf("\n");
    printf("Odd numbers are \n");
    for (i = 0; i < k; i++)
        printf("%d\t", odd[i]);
}
