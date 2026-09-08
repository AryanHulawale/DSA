#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insert_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void show(struct node *head)
{
    struct node *ptr;
    ptr = head;

    if (head == NULL)
    {
        printf("Linked List is empty");
    }

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 15;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 25;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 35;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link->link->link = current;

    insert_at_end(head, 85205);
    show(head);

    return 0;
}