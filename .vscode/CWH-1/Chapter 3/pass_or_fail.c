#include <stdio.h>

int main()
{
    int p, c, m;
    float t;

    printf("Phy marks \n");
    scanf("%d", &p);
    printf("Chem marks \n");
    scanf("%d", &c);
    printf("Maths marks \n");
    scanf("%d", &m);

    t = (p + c + m) / 3;

    if (t < 40 || p < 33 || c < 33 || m < 33)
    {
        printf("\nYour total percentage is %f  and you have failed :(", t);
    }
    else
    {
        printf("\nYour total percentage is %f  and you have passed :)", t);
    }

    return 0;
}