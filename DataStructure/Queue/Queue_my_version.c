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

    if(q->rear == NULL) q->front = q->rear = newNode;
    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeue(Queue *q)
{
    Node *temp = q->front;
    int value = temp->data;
    if(q->front == NULL) q->rear == NULL;
    q->front = q->front->next;
    free(temp);
    return value;
}

int peek(Queue *q)
{
    if(q->front == NULL) printf("Queue is empty");
    return q->front->data;
}

void printQueue(Queue *q)
{
    Node *current = q->front;
    while(current != NULL)
    {
        printf("[%d] -> ", current->data);
        current = current->next;
    }
    printf("NULL");
}

int main(void)
{
    Queue q;
    initQueue(&q);

    int mode, value;

    while(1)
    {
        printf("\n========================\n");
        printf("       Queue Menu\n");
        printf("========================\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek Front\n");
        printf("4. Print Queue\n");
        printf("0. Exit\n");
        printf("------------------------\n");
        printf("Choose: ");

        scanf("%d", &mode);

        if(mode == 0)
        {
            printf("Exiting...\n");
            break;
        }

        switch(mode)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                enqueue(&q, value);

                printf("%d enqueued\n", value);
                break;

            case 2:
            {
                int removed = dequeue(&q);

                if(removed != -1)
                    printf("%d dequeued\n", removed);

                break;
            }

            case 3:
            {
                int frontValue = peek(&q);

                if(frontValue != -1)
                    printf("Front = %d\n", frontValue);

                break;
            }

            case 4:
                printQueue(&q);
                break;

            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}