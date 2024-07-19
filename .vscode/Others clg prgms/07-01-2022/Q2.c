#include <stdio.h>
int main()
{

    int a = 4, b = 9;
    int *p = &a;
    int *q = &b;
    printf("The values of 'a' and 'b' before swapping are: %d %d\n", *p, *q);
    int tem = *p;
    *p = *q;
    *q = tem;
    printf("The values of 'a' and 'b' after swapping are: %d %d", *p, *q);
    return 0;
}