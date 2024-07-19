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
    printf("Total count of Linked List is %d\n", count);
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

void deleteAtStart()
{
    struct node *start;
    if (head == NULL)
    {
        printf("\nLinked List is empty\n");
    }
    else
    {
        head = head->next;
        free(start);
    }
}

void deleteAtEnd()
{
    struct node *end = head;
    struct node *e = head->next;
    if (head == NULL)
    {
        printf("\nLinked List is empty\n");
    }
    else
    {
        while (e->next != NULL)
        {
            end = end->next;
            e = e->next;
        }
        end->next = e->next;
        free(e);
    }
}

void deleteAtPosition()
{
    struct node *postion = head;
    struct node *p;
    int pos, i = 1;
    printf("\nEnter position where it needs to be deleted\n");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("\nXXX Invalid data XXX\n");
    }
    else
    {
        while (i < pos - 1)
        {
            postion = postion->next;
            i++;
        }
        p = postion->next;
        postion->next = p->next;
        free(p);
    }
}

void main()
{
    create();
    display();

    /*
    deleteAtStart();
    printf("\n******* Linked List after Deletion of starting element *******\n");
    display();
    */

    /*
    deleteAtEnd();
    printf("\n******* Linked List after Deletion of last element *******\n");
    display();
    */
    deleteAtPosition();
    printf("\n******* Linked List after Deletion at a given postion *******\n");
    display();
}