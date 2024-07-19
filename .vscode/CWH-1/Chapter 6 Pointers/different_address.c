#include <stdio.h>

void printAdd(int a)
{
    printf("The address of a is %u\n", &a); //this is the clone of the main
}

int main()
{
    int i = 4;

    printf("The value of i is %d\n", i);

    printAdd(i);

    printf("The address of i is %u\n", &i); //this is the main

    return 0;
    
}

//therefore clone and main are not the same so they won't have the same address