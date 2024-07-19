#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 3, y = 4;
    printf("Values of x and y before swap are %d and %d\n", x, y);
    swap(&x, &y);
    printf("Values of x and y after swap are %d and %d\n", x, y);
    return 0;
}