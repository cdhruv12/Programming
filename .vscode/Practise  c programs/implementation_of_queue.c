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
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf("\n");
}
void display()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
void dequeue()
{
    struct node *temp = front;
    if (front == 0 && rear == 0)
    {
        front = rear = temp;
    }
    else
    {
        printf("%d ", front->data);
        front = front->next;
        free(temp);
    }
    printf("\n");
}
void peek()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        front = rear = temp;
    }
    else
    {
        printf("%d ", front->data);
    }
    printf("\n");
}
int main()
{
    enqueue(5);
    enqueue(4);

    dequeue();

    return 0;
}