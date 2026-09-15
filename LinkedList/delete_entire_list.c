#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
}
void add_at_end(struct node *head, int data)
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

struct node *delete(struct node *head)
{

    struct node *temp = head;
    while (temp != NULL)
    {

        temp = temp->link;
        free(head);
        head = temp;
    }

    return head;
}

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 54;
    head->link = NULL;

    add_at_end(head, 25);
    add_at_end(head, 87);
    add_at_end(head, 61);
    add_at_end(head, 92);
    add_at_end(head, 83);

    display(head);
    head = delete(head);
    if (head == NULL)
    {
        printf("Linked List deleted successfully");
    }
    display(head);

    return 0;
}