#include <stdio.h>

int main()
{
    char str[34];

    printf("Enter your name : ");

    gets(str); //-->allow you to use spaces
    puts(str); //--->printd the the given input strings into the next line

    printf("Your name is %s", str);

    return 0;
    
}