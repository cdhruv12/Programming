#include <stdio.h>

float fahranite(float c);

int main()
{
    float c;

    printf("Enter temp in celcius \n");
    scanf("%f", &c);

    printf("fahranite = %f", fahranite(c));

    return 0;
}

float fahranite(float c)
{
    float result;
    result = (c * 9 / 5) + 32;
    return result;
    
}