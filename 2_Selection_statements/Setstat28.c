//program to create Simple Calculator using switch case with at least 7 operations.
#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,mod,s,c;
    char o;
    printf("Enter oprator(+,- etc)");
    scanf("%c",&o);
    printf("Enter two number");
    scanf("%d %d", &a,&b);
    switch (c)
    {
    case '+':
    {
        sum=a+b;
        printf(" Sum is %d",sum);
    }   break;

    case '-':
    {
        sub=a-b;
        printf("Subtraction is %d",sub);
        break;
    }
   
    case '*':
    {
        mul=a*b;
        printf(" Multiplication is %d",mul);
        break;
    }
    case '/':
    {
        div=a/b;
        printf(" Division is %d",div);
        break;
    }
    case '%':
    {
        mod=a%b;
        printf(" Modulus is %d",mod);
       break;
    }
    case 's':
    {
        s=a*a;
        printf(" Square of a is %d",s);
        printf(" Square of b is %d",(b*b));
        break;
    }

    case 'c':
    {
        c=(a*a*a);
        printf(" Cube of a is %d",c);
        printf(" Cube of b is %d",(b*b*b));
        break;
    }
    }
}
