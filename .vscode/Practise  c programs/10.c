#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter 1st no.:\n");
    scanf("%d", &a);
    printf("Enter 2nd no.:\n");
    scanf("%d", &b);
    printf("Enter 1st no.:%d\nEnter 2nd no.:%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swaping\nEnter 1st no.:%d\nEnter 2nd no.:%d\n", a, b);
    return 0;
}