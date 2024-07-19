#include <stdio.h>
void encrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char st[] = "Dhruv Chauhan";
    encrypt(st);
    printf("Encrypted sting is %s\n", st);
    return 0;
}