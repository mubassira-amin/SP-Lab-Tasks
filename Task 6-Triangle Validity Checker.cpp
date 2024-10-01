#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the lengths of the three sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);

    if(a<=0||b<=0||c<=0)
    {
        printf("The lengths of the sides must be positive.\n");


        }

    else if (a+b>c&&a+c>b&&b+c>a)

       {
           printf("The triangle is Valid.\n");
       }

    else{

        printf("The triangle is not Valid.\n");
    }




    return 0;
}
