#include <stdio.h>

int main()
{
    float n, a;
    int x;

    printf("Enter the integer \n");
    scanf("%f", &n);

    x = n;
    a = n - x;

    printf("The entered integer\n%f\n", n);

    printf("The integer part\n%i\n", x);

    printf("The decimal part\n%f\n", a);

    return 0;
}