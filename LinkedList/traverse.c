#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int count_nodes(struct node *head)
{
    int count = 0;

    if (head == NULL)
    {
        printf("Linked List is empty\n");
    }

    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    return count;
}

int main()
{

    struct node *head = NULL;

    // struct node *head = malloc(sizeof(struct node));
    // head->data = 15;
    // head->link = NULL;

    // struct node *current = malloc(sizeof(struct node));
    // current->data = 25;
    // current->link = NULL;
    // head->link = current;

    // current = malloc(sizeof(struct node));
    // current->data = 35;
    // current->link = NULL;
    // head->link->link = current;

    // current = malloc(sizeof(struct node));
    // current->data = 45;
    // current->link = NULL;
    // head->link->link->link = current;

    int count = count_nodes(head);
    printf("Nodes : %d", count);

    return 0;
}