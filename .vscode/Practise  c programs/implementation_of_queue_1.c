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
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        temp = front;
        printf("Queue is \n");
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        printf("Dequeue element %d\n", front->data);
        front = front->next;
        free(temp);
    }
}
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Underflow Condtion\n");
    }
    else
    {
        printf("Top element is %d\n", front->data);
    }
}
int main()
{
    enqueue(12);
    enqueue(23);
    enqueue(34);
    display();
    dequeue();
    peek();
    display();
    return 0;
}