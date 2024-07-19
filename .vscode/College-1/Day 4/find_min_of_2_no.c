#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter 1st no.\n");
    scanf("%d",&a);

    printf("Enter 2nd no.\n");
    scanf("%d",&b);

    if (a>b)
    {
        printf("The 1st no. %d is the greater no.\n",a);
    }

    else if (b<a)
    {
        printf("The 2nd no. %d is the greater no.\n",b);
    }

    else
    {
        printf("Both the no.s are equal\n");
    }

    return 0;
}