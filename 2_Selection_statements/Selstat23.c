/*program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
int main()
{
    int bs,hra,da, gs;
    printf("Enter basic salary of employee");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=(bs/100)*20;
        da=(bs/100)*80;
    }
    else if(bs<=20000)
    {
        hra=(bs/100)*25;
        da=(bs/100)*90;
    }
    else if(bs>20000)
    {
        hra=(bs/100)*30;
        da=(bs/100)*95;
    }
    gs=(bs+hra+da);

    printf("Gross salary is %d",gs);

    return 0;
}