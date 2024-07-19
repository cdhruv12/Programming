#include <stdio.h>
#include <stdlib.h>
struct student
{
    int age;
    struct student *next;
};
struct student *head, *newnode;
void create()
{
    struct student *temp;
    int choice = 1;
    while (choice)
    {
        newnode = malloc(sizeof(struct student));
        printf("enter the node value:");
        scanf("%d", &newnode->age);

        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\n Do you want to enter new node:");
        scanf("%d", &choice);
    }
}
void display()
{
    struct student *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d--->", temp->age);
        temp = temp->next;
    }
}
void main()
{
    create();
    display();
}