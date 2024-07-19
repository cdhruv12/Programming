#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int i, c = 0;
    struct node *head = NULL, *temp, *nNode;
    while (i)
    {
        ++c;
        nNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &nNode->data);
        nNode->next = NULL;
        if (head == NULL)
        {
            head = nNode;
            temp = nNode;
        }
        else
        {
            temp->next = nNode;
            temp = nNode;
        }
        printf("Enter 0 to stop and 1 continue\n");
        scanf("%d", &i);
    }
    temp = head;
    printf("Enter the no you want to search\n");
    int no;
    scanf("%d", &no);
    for (i = 1; i <= c; i++)
    {
        if (temp->data == no)
            break;
        else
            temp = temp->next;
    }
    if (i > 3)
        printf("Number not found");
    else
        printf("The Number found at %d", i);
    return 0;
}