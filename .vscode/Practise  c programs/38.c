#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void print_data(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    printf("Data value of 1st node is %d\n", head->data);
    struct node *current = malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    printf("Data value of 2nd node is %d\n", current->data);
    current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link = current;
    printf("Data value of 3rd node is %d\n", current->data);
    print_data(head);
    return 0;
}