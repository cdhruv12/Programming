#include <stdio.h>
int main()
{
    int variable = 690;

    int *ptr1, **ptr2, ***ptr3;

    ptr1 = &variable;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    printf(" value of variable = %d\n", variable);
    printf(" value of variable using single pointer %p\n", *ptr1);
    printf(" the value of second pointer is %p\n", **ptr2);
    printf("the value using third pointer is %p\n", ***ptr3);
    printf(" value using single pointer %d\n", *ptr1);
    printf(" value using second pointer is %d\n", **ptr2);
    printf(" value using third pointer is %d\n", ***ptr3);
    return 0;
}