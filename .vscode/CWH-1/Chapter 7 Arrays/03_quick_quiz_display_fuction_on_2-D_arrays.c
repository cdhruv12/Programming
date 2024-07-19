#include <stdio.h>

void display_arr(int marks[3][5]);

int main()
{
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d for subject %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    display_arr(marks); // pass 2-D array to a function

    return 0;
}

void display_arr(int marks[3][5])
{
    int n_students = 3;
    int n_subjects = 5;

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Marks of student %d for subject %d is %d \n", i + 1, j + 1, marks[i][j]);
        }
    }
}