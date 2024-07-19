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

struct node *deleteAtFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deleteAtMiddle(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteAtValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL && q->data != value)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = NULL;

    printf("\n********** Linked List **********\n");
    display(head);

    /*
    printf("\n********** Linked List After Deletion Of First Data **********\n");
    head = deleteAtFirst(head);
    display(head);
    */

    /*
    printf("\n********** Linked List After Deletion Of Middle Data **********\n");
    head = deleteAtMiddle(head, 2);
    display(head);
    */

    /*
    printf("\n********** Linked List Ater Deletion Of End Data **********\n");
    head = deleteAtEnd(head);
    display(head);
    */

    printf("\n********** Linked List After Deletion Of Value **********\n");
    head = deleteAtValue(head, 23);
    display(head);

    return 0;
}