#include <stdio.h>
#define MAX 10;

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty()
{
    if (front == -1)
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
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int data)
{
    if (isFull())
    {
        prinf("The queue is full");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}
int dequeue()
{
    if (isEmpty())
    {
        prinf("The queue is full");
        exit(1);
    }
    int value = queue[front];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
    return value;
}
int display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int data;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();

    data = dequeue();
    display();
    data = dequeue();
    display();
    data = dequeue();
    display();

    return 0;
}