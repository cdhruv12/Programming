#include <stdio.h>

typedef struct complex
{
    int real, img;
} comp;

void display(comp c)
{
    printf("The complex no. is %d + %di\n", c.real, c.img);
}

int main()
{
    int n;
    printf("Enter how many complex no. you need \n");
    scanf("%d", &n);
    comp cnums[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the real no. %d\n", i + 1);
        scanf("%d", &cnums[i].real);
        printf("Enter the imaginary no. %d\n", i + 1);
        scanf("%d", &cnums[i].img);
    }

    for (int i = 0; i < n; i++)
    {
        display(cnums[i]);
    }

    return 0;
}