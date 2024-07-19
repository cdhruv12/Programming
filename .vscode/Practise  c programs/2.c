#include <stdio.h>

int main()
{
    printf("Hello\nWorld\n");   // \n:-next line
    printf("Hello\tWorld\n");   // \t:-4 character space
    printf("Hello\bWorld\n");   // \b=going back
    printf("Hello\'World\'\n"); // \'=single slash
    printf("Hello\"World\"\n"); // \=single slash
    printf("Hello\\World\n");   // \\=double slash
    return 0;
}