#include <stdio.h>

int main()
{
    char a[5];
    scanf("%s", a);
    printf("%s\n", a);
    printf("pattern1:");
    printf("%s\n", a + 1);
    printf("pattern2:");
    printf("%s\n", a + 2);
    printf("PATTERN3");
    printf("\n%s", a + 3);
    return 0;
}