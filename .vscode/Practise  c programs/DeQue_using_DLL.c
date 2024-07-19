#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *front = 0, *rear = 0;

void Insertfront(int x)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    newnode->next = front;
    front->prev = newnode;
    front = newnode;
}

void InsertRear(int x)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    rear->next = newnode;
    newnode->prev = rear;
    rear = newnode;
}

void deletefront()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty");
    }
    temp = front;
    front = front->next;
    free(temp);
}

void deleterear()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty");
    }
    temp = rear;
    rear = rear->prev;
    free(temp);
}

void display()
{
    struct node *temp;
    temp = front;
    printf("\n");
    while (front != rear)
    {
        printf("%d--->", front->data);
        front = front->next;
    }
    printf("%d--->", front->data);
}

void main()
{
    InsertRear(5);
    Insertfront(5);
    InsertRear(10); // display()
    deletefront();
    deleterear();
    display();
    // display();
}