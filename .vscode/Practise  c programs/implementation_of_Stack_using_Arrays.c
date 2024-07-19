#include <stdio.h>
int stack[5];
int top = -1;
void Push()
{
    int x;
    printf("Enter data to be pushed :\n");
    scanf("%d", &x);
    if (top == 5 - 1)
    {
        printf("Overflow Condition\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void Pop()
{
    int item;
    if (top == -1)
    {
        printf("Underfolw Condition\n");
    }
    else
    {
        item = stack[top];
        top--;
    }
    printf("Popped item is %d\n", item);
}
void Peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top most element is %d\n", stack[top]);
    }
}
void Display()
{
    if (top >= 0)
    {
        printf("Stack is \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Stack is empty\n");
    }
}
int main()
{
    int ch;
    do
    {
        printf("Enter choice :\n1 : Push\n2 : Pop\n3 : Peek\n4 : Display\nPress 0 to Exit\nEnter your choice :\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (ch != 0);
    return 0;
}