#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("Dhruv.txt", "r");

    int num, num2;
    char ch;

    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%ch", &ch);

    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    printf("%c\n", ch);

    return 0;
}
