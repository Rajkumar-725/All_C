//program to find maximum between three numbers.(using nested if)

#include<stdio.h>
main()
{
    int a,b,c,max=0;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a, &b, &c);

    if(a>b)
    {
        if(a>c)
        printf("The maximum is %d",a);
    }
    if(b>a)
    {
        if(b>c)
        printf("The maximum is %d",b);
    }
    if(c>a)
    {
        if(c>b)
        printf("The maximum is %d",c);
    }
    return 0;

}