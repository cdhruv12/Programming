#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked List is empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("Total no. of Linked List are %d\n", count);
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
    head->link = current;
    printf("Data value of 2nd node is %d\n", current->data);
    current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link->link = current;
    printf("Data value of 3rd value is %d\n", current->data);
    count_of_nodes(head);
    return 0;
}