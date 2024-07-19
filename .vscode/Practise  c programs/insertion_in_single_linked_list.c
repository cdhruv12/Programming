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
    printf("Enter total nodes needed:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data no. %d:\n", i + 1);
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
    printf("Total count of nodes is %d\n", count);
}

void display()
{
    struct node *temp;
    temp = head;
    printf("\n***** Linked List *****\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void insertAtStart()
{
    struct node *start = (struct node *)malloc(sizeof(struct node));
    start->next = head;
    head = start;
    printf("\nEnter the data to be inserted in the begining:\n");
    scanf("%d", &start->data);
}

void insertAtEnd()
{
    struct node *end = (struct node *)malloc(sizeof(struct node));
    struct node *e = head;
    while (e->next != NULL)
    {
        e = e->next;
    }
    e->next = end;
    end->next = NULL;
    printf("\nEnter last element to be inserted :\n");
    scanf("%d", &end->data);
}

void insertAtMiddle()
{
    struct node *mid = (struct node *)malloc(sizeof(struct node));
    struct node *m = head;
    int pos, i = 1;
    printf("\nEnter previous node no. :\n");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid data\n");
    }
    else
    {
        while (i < pos)
        {
            m = m->next;
            i++;
        }
        mid->next = m->next;
        m->next = mid;
        printf("\nEnter Middle data :\n");
        scanf("%d", &mid->data);
    }
}

void main()
{
    create();
    display();

    insertAtStart();
    display();

    insertAtEnd();
    display();

    insertAtMiddle();
    display();
}