#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if (isFull())
    {
        printf("The Stack is Full");
        return;
    }
    top++;
    stack_arr[top] = data;
}
int pop()
{
    if (isEmpty())
    {
        printf("The Stack is empty");
        exit(1);
    }
    int value = stack_arr[top];
    top--;

    return value;
}

int main()
{
    int data;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();

    data = pop();
    display();
    printf("%d\n", data);
    data = pop();
    display();
    printf("%d", data);

    return 0;
}