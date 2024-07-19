#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
int count = 0;

void create()
{
    struct node *newnode, *p;
    int n;
    printf("Enter total nodes needed :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data no. %d\n", i + 1);
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = newnode;
            p = head;
        }
        else
        {
            p->next = newnode;
            p = newnode;
        }
        count++;
    }
    p->next = NULL;
    printf("\nTotal count of nodes is %d\n", count);
}

void display()
{
    struct node *temp;
    head = temp;
    printf("\n******* Linked List *******\n");
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