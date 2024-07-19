#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create()
{
    struct node *newnode, *p;
    int n;
    printf("Enter the number of node:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d", &newnode->data);
        if (i == 0)
        {
            head = newnode;
            p = head;
            head->next = NULL;
        }
        else
        {
            p->next = newnode;
            p = newnode;
        }
    }
    p->next = NULL;
}
void display()
{
    struct node *temp;
    temp = head;
    printf("Linked List\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}