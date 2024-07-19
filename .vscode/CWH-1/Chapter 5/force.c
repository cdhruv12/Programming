#include <stdio.h>

float force(float m);

int main()
{
    float m;

    printf("Enter mass \n");
    scanf("%f", &m);

    printf("Force  = %f", force(m));

    return 0;
}

float force(float m)
{
    float result;
    result = m * 9.8;
    return result;
}