//Enter two numbers and find their sum
//date: 09/02/2023
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum=0; //sum is initialised to zero so that it can't take any garbage value.
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum =%d",sum);

    getch();  //it is defined in <conio.h> {used to hold the terminal screen until next command}
    return 0;


}