#include <stdio.h>

int fibo(int num);

int main()
{
    int num, result;

    printf("Enter fibo series : \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Fibo series for -ve no.s is not possible\n");
    }
    else
    {
        result = fibo(num);
        printf("%d is the fibo series for %d", num, result);
    }

    return 0;
}

int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(num - 1) + fibo(num - 2));
    }
}