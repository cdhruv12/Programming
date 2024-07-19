#include <stdio.h>

// void wrong_swap(int a,int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("Value of 3 and 4 before swap is %d and %d\n", x, y);

    // wrong_swap(x,y); ------> this will not work due to call by value so it will not work

    swap(&x, &y); // this will work due to call by referance

    printf("Vlaue of x and y after swap is %d and %d\n", x, y);

    return 0;

}

/*void wrong_swap(int a,int b)
{
    int temp;
    a=temp;
    a=b;
    b=temp;
    
}*/


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}