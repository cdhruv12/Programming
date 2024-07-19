#include <stdio.h>

int main()
{
    int a;
    float b;
    char ch;

    printf("Enter no.\n");
    scanf("%d", &a);

    printf("Enter decimal\n");
    scanf("%f", &b);

    printf("Enter alphabet\n");
    scanf("%c", &ch);

    printf("%d : is a int datatype\n", a);

    printf("%f : is a float datatype\n", b);

    printf("%c : is a character datatype\n", ch);

    return 0;
}