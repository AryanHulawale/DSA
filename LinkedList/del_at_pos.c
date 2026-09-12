#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

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

void delete_at_pos(struct node *head, int pos)
{
    if (head == NULL)
    {
        printf("Empty");
        return;
    }
    struct node *ptr = head;
    struct node *prev = ptr;
    int count = 1;

    while (count < pos)
    {
        count++;
        prev = ptr;
        ptr = ptr->link;
        if (ptr == NULL)
        {
            break;
        }
    }

    prev->link = ptr->link;
    free(ptr);
    ptr = NULL;
}

void delete_at_beg(struct node **head)
{
    if (head == NULL)
    {
        printf("Empty");
        return;
    }
    else if (head->link == NULL)
    {
        free(head);
        *head = NULL;
    }
    else
    {
        struct node *temp = head;
        *head = *head->link;
        free(temp);
        temp = NULL;
    }
}

void display(struct node *head)
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("Empty");
        return;
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
    head->data = 12;
    head->link = NULL;

    // display(head);
    add_at_end(head, 52);
    add_at_end(head, 46);
    add_at_end(head, 93);
    add_at_end(head, 97);
    add_at_end(head, 93);

    display(head);
    int pos = 3;
    if (pos == 1)
    {
        delete_at_beg(&head);
    }else{

        delete_at_pos(head, pos);
    }

    display(head);

    return 0;
}