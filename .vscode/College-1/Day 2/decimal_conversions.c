#include <stdio.h>

int main()
{
    int value;

    printf("Enter value\n");
    scanf("%d", &value);

    printf("Decimal value : %d\n", value);

    printf("Octadecimal value : %o\n", value);

    printf("Hexadecimal value : %x\n", value);

    return 0;
}