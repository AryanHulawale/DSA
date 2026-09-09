#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *insert_at_end(struct node *ptr, int data)
{

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 85;
    head->link = NULL;

    struct node *ptr = head;
    ptr = insert_at_end(ptr, 62);
    ptr = insert_at_end(ptr, 15);
    ptr = insert_at_end(ptr, 92);
    ptr = insert_at_end(ptr, 49);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
