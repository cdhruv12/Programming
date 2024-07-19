#include<stdio.h>

float avg(a,b,c);

int main()
{
    int a,b,c;

    printf("\n Enter a =");
    scanf("%d",&a);
    printf("\n Enter b =");
    scanf("%d",&b);
    printf("\n Enter c =");
    scanf("%d",&c);

    printf("\n The avg. = %f \n",avg(a,b,c));

    return 0;
}

float avg(a,b,c)
{
    float result;
    result=(float)(a+b+c)/3;
    return result;
}