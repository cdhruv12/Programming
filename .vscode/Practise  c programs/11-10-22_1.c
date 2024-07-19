#include <stdio.h>
#include <stdlib.h>

struct node
{
    int rollno;
    float height, weight;
    struct node *next;
} * head, *temp;

void create()
{
    struct node *newnode, *p;
    int choice = 1;
    while (choice = 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter roll no. :\n");
        scanf("%d", &newnode->rollno);
        printf("\nEnter height :\n");
        scanf("%f", &newnode->height);
        printf("\nEnter weight :\n");
        scanf("%f", &newnode->weight);
        if (head == 0)
        {
            head = newnode;
            p = head;
            head->next = NULL;
        }
        else
        {
            newnode->next = p;
        }
    }
}

int main()
{

    return 0;
}