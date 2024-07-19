#include <stdio.h>
int queue[5];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % 5) == front)
    {
        printf("Queue if full\n");
    }
    else
    {
        rear = (rear + 1) % 5;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d ", queue[front]);
        front = (front + 1) % 5;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is %d ", queue[i]);
        i = (i + 1) % 5;
    }
    printf("%d ", queue[rear]);
}
int main()
{
    enqueue(12);
    enqueue(23);
    enqueue(34);
    enqueue(45);
    enqueue(56);
    dequeue();
    display();
    return 0;
}