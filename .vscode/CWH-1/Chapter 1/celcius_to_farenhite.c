#include <stdio.h>

int main()
{
    float c;

    printf("enter temp in deg celcius=");
    scanf("%f", &c);

    printf("\ntemp in farenhite=%f", (c * 9 / 5) + 32);

    return 0;
}
