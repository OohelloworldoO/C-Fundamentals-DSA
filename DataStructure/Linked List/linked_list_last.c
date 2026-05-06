#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(Node **head, int value)
{
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head)
{
    Node *current = head;
    while(current != NULL)
    {
        printf("[%d] -> ", current->data);
        current = current->next;
    }
    printf("NULL");
}

void insertAtTail(Node **head, int value)
{
    Node *newNode = createNode(value);
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *current = *head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

void deleteNode(Node **head, int value)
{
    
}

int main(void)
{
    Node *head = NULL;
    int value, mode;
    do
    {
        printf("please choose which kind of insertion u want\n");
        printf("insert at head press: `1`\n");
        printf("insert at tail press: `2`\n");
        printf("leave press `0`\n");
        scanf("%d", &mode);
        if(mode == 0) break;
        printf("please input ur value: ");
        scanf("%d", &value);
        if(mode == 1) insertAtHead(&head, value);
        else if(mode == 2) insertAtTail(&head, value);
    }while(mode != 0);
    printList(head);
    return 0;
}