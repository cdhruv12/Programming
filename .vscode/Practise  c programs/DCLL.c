#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev, *next;
} * head, *tail;
void createDCLL()
{
    struct node *newnode;
    head = 0;
    int choice = 1;
    while (choice)
    {
        printf("Enter choice :\nPress 1 to continue...\nPress 2 to Exit....\n");
        scanf("%d", choice);
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :\n");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        tail->next->data;
        head->prev->data;
    }
}
void display()
{
    struct node *temp;
    temp = head;
    if (head == 0)
    {
        printf("Underflow Condition\n");
    }
    printf("DCLL :\n");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != tail);
}
int main()
{
    createDCLL();
    display();
    return 0;
}