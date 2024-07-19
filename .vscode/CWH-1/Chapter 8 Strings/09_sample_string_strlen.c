#include <stdio.h>
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[34];
    printf("Enter string:\n");
    gets(st);
    int l = strlen(st);
    printf("The length of string st is %d\n", l);
    return 0;
}