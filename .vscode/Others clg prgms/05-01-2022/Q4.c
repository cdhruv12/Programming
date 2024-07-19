#include <stdio.h>
int main()
{
    char s[1000];
    int i, j;
    printf("Enter a string:");
    gets(s);
    printf("forward order:\n");
    for (i = 0; i < 1000 && s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\nreverse order:\n");
    for (j = (i - 1); j >= 0; j--)
        printf("%c", s[j]);
    return 0;
}