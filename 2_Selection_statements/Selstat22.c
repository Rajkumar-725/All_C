/* program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate
percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */
#include<stdio.h>
int main()
{
    int p,c,m,b,com,perc;
    printf("Enter marks of 5 subjects \n");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&com);
    perc=((p+c+m+b+com)/5);
    if(perc >= 90)
    printf("Grade A");

    if(perc >= 80 && perc < 90)
    printf("Grade B");

    if(perc >= 70 && perc < 80)
    printf("Grade C");

    if(perc >= 60 && perc < 70)
    printf("Grade D");

    if(perc >= 40 && perc < 60)
    printf("Grade E");

    if(perc < 40)
    printf("Fail");

}