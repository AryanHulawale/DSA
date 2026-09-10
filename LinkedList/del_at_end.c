#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void show(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 815;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 510;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 62;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 168;
    current->link = NULL;
    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 526;
    current->link = NULL;
    head->link->link->link->link = current;

    show(head);

    return 0;
}