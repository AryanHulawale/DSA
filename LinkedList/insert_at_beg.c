#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *insert_at_beg(struct node *head, int data)
{

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;

    temp->link = head;
    head = temp;

    return head;
}

void show(struct node *head)
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("Linked List Empty");
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
    head->data = 23;
    head->link = NULL;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 94;
    temp->link = NULL;

    head->link = temp;

    show(head);
    printf("\n");
    head = insert_at_beg(head, 52);
    head = insert_at_beg(head, 5);
    head = insert_at_beg(head, 82);
    head = insert_at_beg(head, 94);
    head = insert_at_beg(head, 37);

    show(head);

    return 0;
}