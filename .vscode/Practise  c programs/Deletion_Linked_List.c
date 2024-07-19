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

/*
struct node *deleteAtfirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
*/

/*
struct node *deleteAtmiddle(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
*/

/*
struct node *deleteAtend(struct node *head)
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
*/

struct node *deleteAtvalue(struct node *head, int value)
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
        printf("\n********** After deletion of first data **********\n");
        head = deleteAtfirst(head);
        display(head);
    */

    /*
    printf("\n********** After deletion at middle **********\n");
    head = deleteAtmiddle(head, 2);
    display(head);
    */

    /*
    printf("\n********** After deletion at end **********\n");
    head = deleteAtend(head);
    display(head);
    */

    printf("\n********** After deletion of index with given value **********\n");
    head = deleteAtvalue(head, 23);
    display(head);

    return 0;
}