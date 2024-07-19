#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;

    v1.x = 32;
    v1.y = 43;

    printf("The Dimensions of vector 1 of X is %d and Y is %d\n", v1.x, v1.y);

    v2.x = 52;
    v2.y = 63;

    printf("The Dimensions of vector 2 of X is %d and Y is %d\n", v2.x, v2.y);

    return 0;
}