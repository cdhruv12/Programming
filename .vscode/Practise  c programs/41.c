#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void create(struct node *head, int n)
{
    struct node *last;
    int num;
    printf("enter 1st ele - ");
    scanf("%d", &num);
    head->data = num;
    head->link = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter next ele - ");
        scanf("%d", &num);
        temp->data = num;
        temp->link = NULL;
        last->link = temp;
        last = temp;
    }
}

void display(struct node *head)
{
    while (head != 0)
    {
        printf("%d ", head->data);
        head = head->link;
    }
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    int n;
    printf("enter no of ele - ");
    scanf("%d", &n);
    create(head, n);
    display(head);

    return 0;
}