#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 12;
    printf("Data 1:%d\n", head->data);
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data = 23;
    printf("Data 2:%d\n", current->data);
    current->link = NULL;
    current = malloc(sizeof(struct node));
    current->data = 34;
    printf("Data 3:%d\n", current->data);
    current->link = NULL;
    head->link->link = current;
    return 0;
}