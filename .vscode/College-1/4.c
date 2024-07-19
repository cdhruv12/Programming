#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create();
void insert_beg(node **);
void insert_end(node **);
void display(node *);
void delete_last(node **);
void delete_first(node **);
node *create()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("\n ENTER THE VALUE : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    return temp;
}
void insert_beg(node **head)
{
    node *temp;
    temp = create();
    if (*head == NULL)
        *head = temp;
    else
    {
        temp->next = *head;
        *head = temp;
    }
    printf("\n NODE INSERTION AT BEGINING POSITION SUCESSFULL");
}
void insert_end(node **head)
{
    node *temp, *ptr;
    temp = create();
    if (*head == NULL)
        *head = temp;
    else
    {
        ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    printf(" \n NODE INSERTION AT THE LAST POSITION SUCESSFULLY\n");
}
void display(node *head)
{
    node *ptr;
    if (head == NULL)
        printf(" \n YOUR LINKED LIST IS EMPTY\n");
    else
    {
        ptr = head;
        printf("LINKED LIST:\n\t");
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}
void delete_first(node **head)
{
    node *curptr, *temp;
    if (*head == NULL)
        printf(" \n LINKED LIST IS EMPTY . AT FIRST ENTER SOME DATA AND TRY TO DO");
    else
    {
        curptr = temp = *head;
        temp = curptr->next;
        free(curptr);
        *head = temp;
        printf("\n DELETE FIRST NODE IS SUCESSFULL\n");
    }
}
void delete_last(node **head)
{
    node *curptr, *preptr;
    if (*head = NULL)
        printf("\n LINKED LIST IS EMPTY .\n AT FIRST , ENTER SOME DATA AND THEN TRY TO DO ");
    else
    {
        curptr = *head;
        if (curptr->next == NULL)
        {
            free(curptr);
            *head = NULL;
        }
        else
        {
            while (curptr->next != NULL)
            {
                preptr = curptr;
                curptr = curptr->next;
            }
            free(curptr);
            preptr->next = NULL;
        }
        printf("\n DELETE LAST NODE IS SUCESSFULL\n");
    }
}
int main()
{
    system("cls");
    node *start = NULL;
    printf("SINGLE LINKED LIST\n");
    int ch;
    while (1)
    {
        printf(" PRESS 1 TO INSERT AT BEGIN \n PRES 2 TO INSERT AT LAST \n PRESS 3 TO DELETE FIRST NODE \n PRESS 4 TO DELETE LAST NODE\n PRESS 5 TO DISPLAY \n PRESS 6 TO EXIT \n");
        printf(" ENTER YOUR CHOICE : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beg(&start);
            break;
        case 2:
            insert_end(&start);
            break;
        case 3:
            delete_first(&start);
            break;
        case 4:
            delete_last(&start);
            break;
        case 5:
            display(start);
            break;
        case 6:
            system("cls");
            printf("\n");
        default:
            printf(" \n WRONG CHOICE \n");
        }
    }
}