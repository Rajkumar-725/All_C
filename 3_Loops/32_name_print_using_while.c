//program to print your name 10 times using while loop.
#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)//b/c it starts from 0. so 0-9 means 10 digits completed.
    {
        printf(" Raj kumar \n");
        i++;
    }

}

/*
//for taking name as input and print the input name 10 times

#include<stdio.h>
int main()
{
    int i=0;
    char name[50]; //this is a string
    printf("Enter your name \n");
    gets(name); //alternative of scanf.
    while(i<10)//b/c it starts from 0. so 0-9 means 10 digits completed.
    {
        printf(" %s \n",name); //%s is for string
        i++;
    }

}
*/