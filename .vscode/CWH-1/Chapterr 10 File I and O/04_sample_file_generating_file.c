#include <stdio.h>

int main()
{
    FILE *fptr; // you can also use ptr also

    int num = 45;

    fptr = fopen("generated file.txt", "w");

    fprintf(fptr, "The value is %d\n", num);

    fclose(fptr);

    return 0;
}