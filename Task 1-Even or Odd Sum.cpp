#include<stdio.h>
int main()
{
    int a,b;
    int sum=0;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    if(sum%2==0)
    {
        printf("The Sum is Even.\n");
    }
    else
        printf("The Sum is Odd.\n");
    return 0;
}
