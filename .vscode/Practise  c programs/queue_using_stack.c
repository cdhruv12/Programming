#include <stdio.h>
#include <stdlib.h>
int S1[5], S2[5];
int top1 = -1, top2 = -1;
int count = 0;
void enqueue(int x)
{
    push1(x);
    count++;
}
void push1(int data)
{
    if (top1 == 5 - 1)
    {
        printf("Underflow Condition\n");
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
        for (int i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
            b = pop2();
            printf("%d ", b);
            count++;
            for (int i = 0; i < count; i++)
            {
                a = pop2();
                push1(a);
            }
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
    if (top2 == 5 - 1)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        top2++;
        S2[top2] = data;
    }
}
void display()
{
    printf("Queue is ");
    for (int i = 0; i < top1; i++)
    {
        printf("%d ", S1[i]);
    }
}
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    dequeue();
    enqueue(7);
    display();
    return 0;
}