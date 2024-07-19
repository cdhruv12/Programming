#include <stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i, j, sum;
    float avg;

    printf("Enter 1st no. \n");
    scanf("%d", &i);

    printf("Enter 2nd no. \n");
    scanf("%d", &j);

    sumAndAvg(i, j, &sum, &avg);

    printf("Sum is %d\n", sum);
    printf("Avg is %.2f\n", avg);

    return 0;
}