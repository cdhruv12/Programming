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
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        // rear->next=front;
    }
    rear->next = front;
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = 0;
        free(temp);
    }
    else
    {
        printf("Deleted queue is : %d", front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element : %d\n", front->data);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    printf("Queue is");
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != front);
    }
    printf("\n");
}

int main()
{
    enqueue(12);
    enqueue(23);
    enqueue(34);
    enqueue(45);
    display();
    dequeue();
    // peek();
    display();
    return 0;
}