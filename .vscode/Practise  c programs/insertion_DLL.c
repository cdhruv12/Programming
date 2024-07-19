#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail, *newnode;
int count = 0;

void create()
{
    struct node *newnode;
    int choice = 1;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n\nEnter Data :\n");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            tail = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        count++;
        printf("\nDo you want to continue ?\nPRESS 1 TO CONTINUE \t PRESS 0 TO END\n");
        scanf("%d", &choice);
    }
}

void display()
{
    struct node *temp;
    temp = head;
    printf("\n\n------- Doubly Linked List -------\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\nTotal count of nodes is %d\n", count);
}

void insertAtStart()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    printf("\nEnter data :\n");
    scanf("%d", &newnode->data);
    count++;
}

void insertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data :\n");
    scanf("%d", &newnode->data);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    tail->next = NULL;
    count++;
}

void insertAtPos()
{
    int pos;
    printf("\nEnter Position :\n");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("\n***** INVALID DATA *****\n");
    }
    else if (pos == 1)
    {
        insertAtStart();
    }
    else
    {
        struct node *newnode, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        temp = head;
        printf("\nEnter data :\n");
        scanf("%d", &newnode->data);
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
    count++;
}

void insertAfterPos()
{
    int pos;
    printf("\nEnter Position :\n");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("\n***** INVALID DATA *****\n");
    }

    else
    {
        struct node *newnode, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        temp = head;
        printf("\nEnter data :\n");
        scanf("%d", &newnode->data);
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
    count++;
}

int main()
{
    create();
    display();

    insertAtStart();
    printf("\n------- After Inerttion At Start --------\n");
    display();

    insertAtEnd();
    printf("\n------- After Inerttion At End --------\n");
    display();

    insertAtPos();
    printf("\n------- INsertion At Given Postion -------\n");
    display();

    insertAfterPos();
    printf("\n------- INsertion At After Postion -------\n");
    display();

    return 0;
}