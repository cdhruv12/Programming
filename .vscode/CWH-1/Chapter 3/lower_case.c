#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character\n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf(" '%c' ---> this character is upper case\n", ch);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf(" '%c' ---> this character is a lower case\n", ch);
    }

    else
    {
        printf(" '%c' ---> this  character is not a alphabet\n", ch);
    }

    return 0;
}