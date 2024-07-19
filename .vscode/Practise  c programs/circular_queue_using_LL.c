#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (rear == 0)
    {
        front = rear = newnode;
        rear->next = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Underflow Condition\n");
    }
    else if (front == rear)
    {
        front = rear = temp;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        printf("%d ", front->data);
    }
}
void display()
{
    struct node *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Underflow  Condition\n");
    }
    else
    {
        while (temp->next != front)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    enqueue(12);
    enqueue(23);
    enqueue(34);
    peek();
    dequeue();
    peek();
    display();
    return 0;
}