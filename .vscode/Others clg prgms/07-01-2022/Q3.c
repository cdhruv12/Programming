#include <stdio.h>

int main()
{

    int a = 4;
    float b = 9.11;
    char c = 'A';
    int *p = &a;
    float *q = &b;
    char *r = &c;
    printf("%d %f %c", *p, *q, *r);
    printf("\nEnter some new values\n");
    scanf("%d %f %c", p, q, r);
    printf("%d %f %c", *p, *q, *r);
    return 0;
}