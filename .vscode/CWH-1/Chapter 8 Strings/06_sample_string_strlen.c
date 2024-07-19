#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string : ");
    gets(str);

    int a = strlen(str);

    printf("The length of the string str is %d", a);

    return 0;
    
}