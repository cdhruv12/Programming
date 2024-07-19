#include <stdio.h>

// use of malloc function
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head, *second, *third;

    // Making nodes for the linked list which is going to be stored in the heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link head and second
    head->data = 12;
    head->next = second;

    // link second and third
    second->data = 23;
    second->next = third;

    // terminate the third
    third->data = 34;
    third->next = NULL;

    traverse(head);

    return 0;
}