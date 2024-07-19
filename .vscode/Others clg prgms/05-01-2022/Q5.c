#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, totChar;
    totChar = 0;
    printf("Please enter the string for counting words\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            totChar++;
        }
    }
    printf("The total characters of the given string= %d", totChar);
    getch();
    return 0;
}