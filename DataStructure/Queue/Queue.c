#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *front;
    Node *rear;
} Queue;

void initQueue(Queue *q)
{
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(Queue *q, int value)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if(q->rear == NULL)
    {
        q->front = q->rear = newNode;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeue(Queue *q)
{
    if(q->front == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }

    Node *temp = q->front;
    int value = temp->data;

    q->front = q->front->next;

    if(q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
    return value;
}

int peek(Queue *q)
{
    if(q->front == NULL) return -1;
    return q->front->data;
}