#include <stdio.h>

int main()
{
    FILE *ptr;

    int num, num2;

    ptr = fopen("Dhruv.txt", "r");

    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);

    printf("Value of num is %d\n", num);
    printf("Value of num2 is %d\n", num2);

    fclose(ptr);

    return 0;
}