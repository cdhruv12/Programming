#include <stdio.h>
#define n 5
int DeQue[n];
int f = -1;
int r = -1;
void enqueuefront(int x)
{
    if ((f == 0 && r == n - 1) || (f = r + 1))
    {
        printf("Overflow Condition\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        DeQue[f] = x;
    }
    else if (f == 0)
    {
        f = n - 1;
        DeQue[f] = x;
    }
    else
    {
        f--;
        DeQue[f] = x;
    }
    printf("\n");
}
void enqueuerear(int x)
{
    if ((f == 0 && r == n - 1) || (f = r + 1))
    {
        printf("Overflow Condition\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        DeQue[r] = x;
    }
    else if (r = n - 1)
    {
        r = 0;
        DeQue[r] = x;
    }
    else
    {
        r++;
        DeQue[r] = x;
    }
    printf("\n");
}
void display()
{
    int i = f;
    printf("DeQue is \n");
    while (i != f)
    {
        printf("%d ", DeQue[i]);
        i = (i + 1) % n;
    }
    printf("%d ", DeQue[i]);
    printf("\n");
}
void getfront()
{
    printf("%d ", DeQue[f]);
    printf("\n");
}
void getrear()
{
    printf("%d ", DeQue[r]);
    printf("\n");
}
void dequeuefront()
{
    if (f == -1 && r == -1)
    {
        printf("Underflow Condition\n");
    }
    else if (f == r)
    {
        f = r = -1;
        printf("Dequeued element is %d\n", DeQue[f]);
    }
    else if (f = n - 1)
    {
        printf("Dequeued element is %d\n", DeQue[f]);
        f = 0;
    }
    else
    {
        printf("Dequeued element is %d\n", DeQue[f]);
        f++;
    }
    printf("\n");
}
void dequeuerear()
{
    if (f == -1 && r == -1)
    {
        printf("Underflow Condition\n");
    }
    else if (f == r)
    {
        printf("Dequeued element is %d\n", DeQue[r]);
        f = r = -1;
    }
    else if (r == 0)
    {
        printf("Dequeued element is %d\n", DeQue[r]);
        r = n - 1;
    }
    else
    {
        printf("Dequeued element is %d\n", DeQue[r]);
        r--;
    }
    printf("\n");
}
int main()
{
    enqueuefront(12);
    enqueuefront(23);
    enqueuerear(45);
    enqueuerear(56);
    display();
    dequeuefront();
    dequeuefront();
    dequeuerear();
    display();
    getfront();
    getrear();
    display();
    return 0;
}