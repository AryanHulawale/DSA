#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void del_at_end(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is Empty");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {

        struct node *ptr = head;
        struct node *prev = ptr;
        while (ptr->link != NULL)
        {
            prev = ptr;
            ptr = ptr->link;
        }
        prev->link = NULL;
        free(ptr);
        ptr = NULL;
    }
}

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

    printf("\n");
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

    insert_at_end(head, 85);
    insert_at_end(head, 05);
    insert_at_end(head, 26);
    insert_at_end(head, 45);
    show(head);

    del_at_end(head);
    show(head);

    return 0;
}