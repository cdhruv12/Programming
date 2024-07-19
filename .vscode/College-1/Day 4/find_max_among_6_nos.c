#include<stdio.h>

int main()
{
    int a, b, c, d,e,f;

    printf("Enter 1st no.\n");
    scanf("%d", &a);

    printf("Enter 2nd no.\n");
    scanf("%d", &b);

    printf("Enter 3rd no.\n");
    scanf("%d", &c);

    printf("Enter 4th no.\n");
    scanf("%d", &d);

    printf("Enter 5th no.\n");
    scanf("%d", &e);

    printf("Enter 6th no.\n");
    scanf("%d", &f);

    if (a==b==c==d==e==f)
    {
        printf("All no.s are equal");
    }

    else if (b >= a && b >= c && b >= d && b>=e && b>=f)
    {
        printf("The 2nd no. %d is the max. no.\n", b);
    }    

    else if (c >= a && c >= b && c>= d && c>=e && c>=f )
    {
        printf("The 3rd no. %d is the max. no.\n", c);
    }    
    else if (d >= a && d >= b && d >= c && d>=e && d>=f )
    {
        printf("The 4th no. %d is the max. no.\n", d);
    }

    else if (a>=b && a>=c && a>=d && a>=e && a>=f )
    {
        printf("The 1st no. %d is the max no.\n",a);
    }

    else if (e >= a && e >= b && e >= c && e>=d && e>=f )
    {
        printf("The 4th no. %d is the max. no.\n", d);
    }

    else if (f >= a && f >= b && f >= c && f>=d && f>=e )
    {
        printf("The 4th no. %d is the max. no.\n", d);
    }

    return 0;
}