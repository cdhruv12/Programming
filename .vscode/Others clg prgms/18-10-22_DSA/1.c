#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enQueue(int x)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {

        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void deQueue()
{
    struct node *temp;
    temp = front;
    if (front == 0)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("Queue is Full\n");
        front = rear = 0;
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    printf("Queue is empty \n");
    while (temp->next != front)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
    printf("\n");
}

int main()
{
    int ch, y;
    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
            printf("enter the data:");
            scanf("%d", &y);
            enQueue(y);
            break;
        case 2:
            display();
            break;
        case 3:
            deQueue();
            break;
        case 4:
            exit(0);
            break;
        }
        printf(" 1.ENTER NEW ELEMENT \n 2.DISPLAY THE ELEMENT \n 3.DELETE THE ELEMENT \n 4.EXIT THE OPERATION\n");
        scanf("%d", &ch);
    }
}