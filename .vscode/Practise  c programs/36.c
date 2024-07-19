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
    head->data = 45;
    head->link = NULL;
    printf("Data value of 1st node is %d\n", head->data);
    struct node *current = malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link = current;
    printf("Data value of 2nd node is %d\n", current->data);
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    printf("Data value of 3rd node is %d\n", current->data);
    current = malloc(sizeof(struct node));
    current->data = 43;
    current->link = NULL;
    head->link->link->link = current;
    printf("Data value of 4th node is %d\n", current->data);
    return 0;
}