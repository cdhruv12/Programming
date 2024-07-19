#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        printf("Popped element is %d\n", top->data);
        top = top->next;
        free(temp);
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
        printf("Top element is %d\n", top->data);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    printf("Stack is \n");
    if (top == 0)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main()
{
    push(12);
    push(23);
    push(34);
    display();
    peek();
    pop();
    display();
    peek();
    return 0;
}