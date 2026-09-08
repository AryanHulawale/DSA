#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void show(int head)
{
    int *ptr = head;
    while (ptr != NULL)
    {
        printf(ptr->info);
        ptr = ptr->link;
    }
}

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->info = 1;

    struct node *temp = malloc(sizeof(struct node));
    temp->info = 2;
    temp->link = NULL;
    head->link = temp;

    struct node *temp = malloc(sizeof(struct node));
    temp->info = 3;
    temp->link = NULL;
    head->link->link = temp;

    struct node *temp = malloc(sizeof(struct node));
    temp->info = 4;
    temp->link = NULL;
    head->link->link->link = temp;

    show(head);

    return 0;
}