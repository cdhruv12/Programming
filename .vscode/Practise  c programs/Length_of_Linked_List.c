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
    printf("Enter total no. of nodes needed :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data no. %d :\n", i + 1);
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
        count++;
    }
    p->next = NULL;
    printf("The Length of Nodes is %d\n", count);
}

void display()
{
    struct node *temp;
    temp = head;
    printf("\n******* Linked List *******\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void reverse()
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}

int main()
{
    create();
    display();

    reverse();
    printf("\n\n\n------- Reversed Linked List -------\n");
    display();

    return 0;
}