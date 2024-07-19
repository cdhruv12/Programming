#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, count = 0;
    printf("Enter a character\n");
    scanf("%c", &ch);
    printf("Enter string\n");
    scanf("%s", str);
    printf("Position of '%c' in %s are : ", ch, str);
    for (; str[i]; i++)
    {
        if (str[i] == ch)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCharacter '%c' occured for %d times\n", ch, count);
}