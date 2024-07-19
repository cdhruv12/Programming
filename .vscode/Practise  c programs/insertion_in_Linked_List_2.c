#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertAtstart(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node *insertAtindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertAtend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *insertAtmiddle(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = NULL;

    printf("\n********* Display Data **********\n");
    display(head);

    printf("\n********** After Insertion at the start **********\n");
    head = insertAtstart(head, 45);
    display(head);

    printf("\n********** After Insertion at the the index **********\n");
    head = insertAtindex(head, 56, 3);
    display(head);

    printf("\n********** After Insertion at the end **********\n");
    head = insertAtend(head, 67);
    display(head);

    printf("\n********** After Insertion before a node **********\n");
    head = insertAtmiddle(head, second, 78);
    display(head);

    return 0;
}