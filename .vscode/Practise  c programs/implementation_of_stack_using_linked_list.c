#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;
void push()
{
    int x;
    printf("Enter no. to be pushed : \n");
    scanf("%d", &x);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void display()
{
    if (top == 0)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Stack is \n");
        struct node *temp = top;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void peek()
{
    if (top == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        printf("Top element is :%d\n", top->data);
    }
    printf("\n");
}
void pop()
{
    if (top == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        struct node *temp = top;
        printf("Popped element is :%d\n", top->data);
        top = top->next;
        free(temp);
    }
}
int main()
{
    int ch;
    printf("Enter Choice :\nPress 1 : Push\nPress 2 : Pop\nPress 3 : Peek\nPress 4 : Display\nPress 0 to Exit\nEnter your choice :\n");
    scanf("%d", &ch);
    do
    {
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
            ;
        case 3:
            peek();
            break;
        case 4:
            display();
        default:
            break;
        }
    } while (ch != 0);

    return 0;
}