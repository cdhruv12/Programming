#include <stdio.h>
#define n 5
int S1[n], S2[n];
int top1 = -1;
int top2 = -1;
int count = 0;
void enqueue(int x)
{
    push1(x);
    count++;
}
void push1(int data)
{
    if (top1 == n - 1)
    {
        printf("Underflow Condtion\n");
    }
    else
    {
        top1++;
        S1[top1] = data;
    }
}
void dequeue()
{
    int i, a, b;
    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("Dequed element is %d\n", b);
        count--;
        for (i = 0; i < count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}
int pop1()
{
    return S1[top1--];
}
int pop2()
{
    return S2[top2--];
}
void push2(int data)
{
    int i, a, b;
    if (top2 == n - 1)
    {
        printf("Overflow Condition\n");
    }
    else
    {
        top2++;
        S2[top2] = data;
    }
}
void display()
{
    int i;
    printf("Queue is empty\n");
    for (i = 0; i < top1; i++)
    {
        printf("%d ", S1[i]);
    }
}
int main()
{
    enqueue(12);
    enqueue(23);
    enqueue(34);
    enqueue(45);
    display();
    enqueue(56);
    dequeue();
    display();
    return 0;
}