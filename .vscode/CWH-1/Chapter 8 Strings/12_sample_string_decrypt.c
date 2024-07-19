#include <stdio.h>
void decrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char st[] = "Eisvw!Dibvibo";
    decrypt(st);
    printf("Decrypted sting is %s\n", st);
    return 0;
}