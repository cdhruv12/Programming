#include <stdio.h>
typedef struct students
{
    int roll;
    char name[10];
    int age;
    float cgpa;
} std;

int main()
{
    std arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll no. of student %d\n", i + 1);
        scanf("%d", &arr[i].roll);
        printf("Enter name of student %d\n", i + 1);
        getchar();
        fgets(arr[i].name,10,stdin);
        printf("Enter age of student %d\n", i + 1);
        scanf("%d", &arr[i].age);
        printf("Enter cgpa of student %d\n", i + 1);
        scanf("%f", &arr[i].cgpa);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Roll No. of student %d is %d\n", i + 1, arr[i].roll);
        printf("Name of student %d is %s\n", i + 1, arr[i].name);
        printf("Age of student %d is %d\n", i + 1, arr[i].age);
        printf("CGPA of student %d is %.2f\n", i + 1, arr[i].cgpa);
    }
    return 0;
}