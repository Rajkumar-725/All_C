//Enter two angle of triangle and find the third angle.
#include<stdio.h>
int main()
    {
        float fir,sec,thd;
        printf("Enter two angles of a triangle \n");
        scanf("%f%f",&fir,&sec);
        thd=(180-(fir+sec));
        printf("The third angle is %f",thd);
        return 0;

    }
