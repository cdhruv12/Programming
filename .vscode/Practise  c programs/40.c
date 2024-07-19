#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void insert_node(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    printf("%d\n", head->data);
    struct node *current = malloc(sizeof(struct node));
    current->data = 23;
    head->link = current;
    printf("%d\n", current->data);
    current = malloc(sizeof(struct node));
    current->data = 34;
    head->link->link = current;
    printf("%d\n", current->data);
    insert_node(head, 5);

    return 0;
}