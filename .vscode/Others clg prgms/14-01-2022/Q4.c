#include <stdio.h>
void dis(int a, char b, int c)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
}
int main()
{
    printf("ab\n");
    dis(2, '-', 3);
    printf("cd\n");
    dis(4, '*', 5);
    printf("lm\n");
    dis(3, '#', 2);
    return 0;
}
