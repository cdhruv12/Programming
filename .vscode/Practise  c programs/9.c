#include <stdio.h>

int main()
{
    char c;
    printf("Enter character:\n");
    scanf("%c", &c);
    printf("Value of character %c is %d\n", c, c);
    for (int i = 0; i <= 9; i++) // display 9 no.s
    {
        printf("%d\n", i);
    }

    return 0;
}