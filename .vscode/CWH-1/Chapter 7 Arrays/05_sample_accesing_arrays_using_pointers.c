#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;

    // ptr = &marks[0];
    ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter value of marks of student %d : ", i + 1);
        scanf("%d", ptr);

        ptr++;
        // printf("Value of marks of student %d  is %d \n", i + 1, marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Value of marks of student %d  is %d \n", i + 1, marks[i]);
    }

    return 0;
    
}