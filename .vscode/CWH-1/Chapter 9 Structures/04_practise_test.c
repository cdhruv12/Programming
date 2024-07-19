#include <stdio.h>

typedef struct complex
{
    int real, img;
} comp;

int main()
{
    comp a, b, c;

    printf("Enter real values for a and b \n");
    scanf("%d %d", &a.real, &b.real);
    printf("Enter img values for a and b \n");
    scanf("%d %d", &a.img, &b.img);

    c.real = a.real + b.real;
    c.img = a.img + b.img;

    printf("The Sum is %d + %di", c.real, c.img);

    return 0;
}