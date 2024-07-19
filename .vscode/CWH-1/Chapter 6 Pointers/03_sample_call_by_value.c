#include <stdio.h>

int sum(int a, int b);

int main()
{
    int x = 4, y = 7;

    printf("The value of x and y is %d and %d respectively\n", x, y);
    printf("The value of 4 + 7 is %d\n", sum(x, y));
    printf("The value of x and y after function call is %d and %d repectively\n", x, y);

    return 0;

}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 1234;
    b = 6789;
    return c;
    
}

