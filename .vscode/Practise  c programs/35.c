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
    struct node *current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL; 
    head->link = current;
    printf("Value of 1st node = %d\n", head->data);
    printf("Value of 2nd node = %d\n", current->data);
    return 0;
}