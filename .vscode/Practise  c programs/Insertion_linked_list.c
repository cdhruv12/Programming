#include <stdio.h>

// to use malloc function
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// traversing fuction of linked to display the data
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

// fuction to insert data at the begning of linked list
struct node *insertAtfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// function to insert data in between the linked list
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

// function to insert data at the end of the lnked list
struct node *insertAtend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// function to insert element after the node in the linked list
struct node *insertAfternode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

// main function
int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // initialise head node and link it to second node
    head->data = 12;
    head->next = second;

    // initialise second node and link it to third node
    second->data = 23;
    second->next = third;

    // initialise third node and link it to fourth node
    third->data = 34;
    third->next = fourth;

    ////initialise fourth node and terminate the node
    fourth->data = 45;
    fourth->next = NULL;

    // Display the data of the Linked List
    printf("Data of the Linked List\n");
    traverse(head);
    printf("\n");

    // Insertion at begning
    printf("Data after insertion at the beganing\n");
    head = insertAtfirst(head, 56);
    traverse(head);
    printf("\n");

    // Insertion at index or before a node
    printf("Data after insertion at index or before a node\n");
    head = insertAtindex(head, 67, 3);
    traverse(head);
    printf("\n");

    // Insertion at the end
    printf("Data after insertion at the end\n");
    head = insertAtend(head, 78);
    traverse(head);
    printf("\n");

    // Insertion after any node in between the Linked list
    printf("Data after insertion after any node in an Linked List\n");
    head = insertAfternode(head, third, 89);
    traverse(head);

    return 0;
}