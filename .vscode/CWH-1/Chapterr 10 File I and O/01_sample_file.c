#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("sample_file.txt", "r"); // r--> to write the program
    ptr = fopen("sample_file.txt", "w"); // w--> to write the program

    return 0;
}