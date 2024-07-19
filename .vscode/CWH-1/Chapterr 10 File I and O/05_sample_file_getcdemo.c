#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("getcsample.txt", "r");

    // char c = fgetc(ptr);

    // printf("Value of character is %c\n", c);

    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));
    printf("The value of character is %c\n", fgetc(ptr));

    fclose(ptr);

    return 0;
}