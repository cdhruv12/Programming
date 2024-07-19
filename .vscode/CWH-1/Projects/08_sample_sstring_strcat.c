#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Hello";
    char str2[10] = "Dhruv";

    strcat(str1, str2);

    printf("Now strng str 1 is %s", str1);

    return 0;
}