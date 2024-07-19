#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for node Press -1 for no node : \n");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    else
    {
        newnode->data = x;
        printf("Enter left side of node :\n");
        scanf("%d", &newnode->left);
        newnode->left = create();
        printf("Enter right side of node :\n");
        scanf("%d", &newnode->right);
        newnode->right = create();
    }
}

int main()
{
    struct node *root;
    root = 0;
    root = create();
    return 0;
}