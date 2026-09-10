#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insert_at_beg(struct node **head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = *head;

    *head = temp;
}

void insert_at_end(struct node *head, int data)
{

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    struct node *ptr = head;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void insert_at_pos(struct node *head, int data, int pos)
{

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    struct node *ptr = head;

    int count = 1;
    while (count != pos - 1)
    {
        count++;
        ptr = ptr->link;
    }

    temp->link = ptr->link;
    ptr->link = temp;
}

void display(struct node *head)
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("Linked List empty");
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

    insert_at_end(head, 52);
    insert_at_end(head, 92);
    insert_at_end(head, 87);
    insert_at_end(head, 36);

    display(head);

    int data = 85;
    int pos = 3;
    if (pos == 1)
    {
        insert_at_beg(&head, data);
    }
    else
    {
        insert_at_pos(head, data, pos);
    }

    display(head);

    return 0;
}