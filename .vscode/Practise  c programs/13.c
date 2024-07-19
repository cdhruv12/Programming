#include <stdio.h>

int main()
{
    int n = 1962;
    int d = n % 100;
    int e = n / 100;
    int s = e % 10;
    int t = e / 10;
    int u = s * 10 + t;
    int a = d % 10;
    int b = d / 10;
    int c = a * 10 + b;
    int f = u * 100 + c;
    printf("%d", f);
    return 0;
}