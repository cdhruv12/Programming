#include <stdio.h>

typedef struct vector // using typedef so to use 'vec' instead of writing 'struct vector'
{
    int x;
    int y;
} vec;

vec SumVector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vec v1, v2, sum;

    printf("\nEnter the value of V1 for X dimensions :");
    scanf("%d", &v1.x);
    printf("\nEnter the value of V1 for Y dimensions :");
    scanf("%d", &v1.y);
    printf("\nEnter the value of V2 for X dimensions :");
    scanf("%d", &v2.x);
    printf("\nEnter the value of V2 for Y dimensions :");
    scanf("%d", &v2.y);

    sum = SumVector(v1, v2);

    printf("The Sum of X dimension is %d\n", sum.x);
    printf("The Sum of y dimension is %d\n", sum.y);

    return 0;
}