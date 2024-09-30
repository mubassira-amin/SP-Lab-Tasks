#include<stdio.h>
int main()
{
    char _operator;
    printf("Enter an Operator(+,-,*,/):");
    scanf("%c",&_operator);

    double a,b;
    printf("Enter Two Numbers:");
    scanf("%lf%lf",&a,&b);

    if(_operator=='+')
    {
        printf("%.2lf+%.2lf=%.2lf",a,b,a+b);
    }
    else if(_operator=='-')
    {
        printf("%.2lf-%.2lf=%.2lf",a,b,a-b);
    }
    else if(_operator=='*')
    {
        printf("%.2lf*%.2lf=%.2lf",a,b,a*b);
    }
    else if(_operator=='/')
    {
        if(b!=0)
            printf("%.2lf/%.2lf=%.2lf",a,b,a/b);
        else
            printf("Error");

    }

    else
    {
        printf("Error");
    }
    return 0;
}
