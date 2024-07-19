#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Dhruv";

    char str2[34];

    strcpy(str2, str);

    printf("Now the value of str2 is %s", str2);

    return 0;
    
}