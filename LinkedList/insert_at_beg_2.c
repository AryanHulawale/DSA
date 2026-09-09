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

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->link;
    }
}

// void display(struct node *head)
// {
//     struct node *ptr = head;
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->link;
//     }
// }


int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 85;
    head->link = NULL;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 28;
    temp->link = NULL;

    head->link = temp;

    // display(head);
    insert_at_beg(&head, 129);
    insert_at_beg(&head, 525);
    insert_at_beg(&head, 893);
    insert_at_beg(&head, 615);
    insert_at_beg(&head, 154);
    display(head);
    printf("\n");

    struct node *ptr = head;

   while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}