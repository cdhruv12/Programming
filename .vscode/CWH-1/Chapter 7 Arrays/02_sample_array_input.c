#include <stdio.h>

int main()
{
    int marks[4]; // allocate spaces for 4 integers

    printf("\nEnter 1st no. : ");
    scanf("%d", &marks[0]);

    printf("\nEnter 2nd no. : ");
    scanf("%d", &marks[1]);

    printf("\nEnter 3rd no. : ");
    scanf("%d", &marks[2]);

    printf("\nEnter 4th no. : ");
    scanf("%d", &marks[3]);

    printf("\nThe 4 no.s are %d , %d , %d and %d repectively", marks[0], marks[1], marks[2], marks[3]);

    return 0;
    
}