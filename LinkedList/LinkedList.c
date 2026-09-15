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

void insert(struct node **head, int data, int pos)
{
    if (*head == NULL)
    {
        printf("Linked List Empty");
        return;
    }

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    if (pos == 1)
    {
        temp->link = *head;
        *head = temp;
    }
    else
    {
        struct node *ptr = *head;
        struct node *prev = *head;

        int count = 1;
        while (count < pos)
        {
            count++;
            prev = ptr;
            ptr = ptr->link;
        }

        temp->link = prev->link;
        prev->link = temp;
    }
   
}
void delete(struct node **head, int pos)
{
    if (*head == NULL)
    {
        printf("Linked List Empty");
        return;
    }
    if (pos == 1)
    {
        struct node *temp = *head;
        *head = temp->link;
        free(temp);
        temp = NULL;
    }
    else
    {
        struct node *ptr = *head;
        struct node *prev = *head;
        
        int count = 1;
        while (count < pos)
        {
            count++;
            prev = ptr;
            ptr = ptr->link;
        }
        
        prev->link = ptr->link;
        free(ptr);
        ptr = NULL;
    }
  
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

    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    int choice;
    printf("Enter the Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int data;
        printf("Enter the Data : ");
        scanf("%d", &data);
        int pos;
        printf("Enter the Position : ");
        scanf("%d", &pos);
        insert(&head, data, pos);
        display(head);
    }
    else if (choice == 2)
    {
        int pos;
        printf("Enter the Position : ");
        scanf("%d", &pos);
        delete(&head, pos);
        display(head);
    }
    else if (choice == 3)
    {
        display(head);
    }
    else
    {
        printf("Invalid Argument");
        display(head);
    }

    return 0;
}