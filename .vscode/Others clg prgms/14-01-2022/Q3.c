#include <stdio.h>
int rev(int n)
{
    int r = 0;
    int d;
    while (n != 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    return r;
}
int main()
{
    int no;
    scanf("%d", &no);
    printf("%d", rev(no));
    return 0;
}