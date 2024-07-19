#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Dhruv";

    int val = strcmp(str1, str2);

    printf("Now the values are %d", val);

    return 0; 
    
}