#include <stdio.h>
char *strcpy(char *destination, char *source)
{
    if (destination == NULL)
    {
        return NULL;
    }
    char *ptr = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return ptr;
}
int main()
{
    char source[] = "Dhruv Chauhan";
    char destination[34];
    printf("%s\n", strcpy(destination, source));
    return 0;
}