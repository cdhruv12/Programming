#include <stdio.h>

int main()
{
    int m;

    printf("Enter the total score\n");
    scanf("%d", &m);

    if (m >= 90)
    {
        printf("Graded A\n");
    }
    else if (m < 90, m >= 80)
    {
        printf("Graded B\n");
    }
    else if (m < 80, m >= 70)
    {
        printf("Graded C\n");
    }
    else if (m < 70, m >= 60)
    {
        printf("Graded D\n");
    }
    else if (m < 60, m >= 50)
    {
        printf("Graded F\n");
    }

    return 0;
}