#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void create()
{
    int choice = 1;
    struct node *newnode, *temp;
    head = 0;
    printf("Enter choice :\nPress 1 to continue\nPress 0 to exit\n");
    scanf("%d", &choice);
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :\n");
        scanf("%d", newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head;
    }
}
void display()
{
    struct node *temp;
    if (head == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        temp = head;
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
}
int main()
{
    create();
    display();
    return 0;
}