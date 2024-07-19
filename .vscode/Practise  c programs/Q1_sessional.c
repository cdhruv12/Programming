#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *temp1, *temp2, *t, *newNode, *startList;
    int n, k, i, j;
    startList = NULL;
    printf("Enter the no. of elements needed :\n");
    scanf("%d", &n);
    printf("Enter elements :\n");
    for (i = 1; i <= n; i++)
    {
        if (startList == NULL)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newNode->data);
            newNode->next = NULL;
            startList = newNode;
            temp1 = startList;
        }
        else
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newNode->data);
            newNode->next = NULL;
            temp1->next = newNode;
            temp1 = newNode;
        }
    }
    temp1->next = startList;
    for (i = n - 2; i >= 0; i--)
    {
        temp1 = startList;
        temp2 = temp1->next;
        for (j = 0; j <= i; j++)
        {
            if (temp1->data > temp2->data)
            {
                k = temp1->data;
                temp1->data = temp2->data;
                temp2->data = k;
            }
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }
    printf("Sorted Order / Increasing Order is: \n");
    t = startList;
    while (t->next != startList)
    {
        printf("%d\t", t->data);
        t = t->next;
    }
    printf("%d", t->data);
}