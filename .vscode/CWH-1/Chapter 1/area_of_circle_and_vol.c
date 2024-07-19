#include <stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;

    printf("Enter the radius of the circle \n");
    scanf("%d", &r);

    printf("Area of circle is %d \n", pi * r * r);

    printf("Enter height is \n");
    scanf("%f", &h);

    printf("The vol is %f\n", pi * r * r * h);

    return 0;
}