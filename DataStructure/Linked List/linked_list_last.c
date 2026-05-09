#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

int deleteNode(Node **head, int value)
{
    if(*head == NULL) return 0;
    Node *current = *head;
    Node *previous = NULL;
    if(current->data == value)
    {
        *head = current->next;
        free(current);
        return 1;
    }
    while(current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }
    if(current == NULL) return 0;
    previous->next = current->next; // 既不是空 list 也不是查無此 value 那就是找到了 於是將 previous->next 指向 當前的下一個 然後刪除當前的 Node
    free(current);
    return 1;
}

void reverseList(Node **head)
{
    Node *previous = NULL;
    Node *current = *head;
    Node *next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *head = previous;
}

void freelist(Node *head)
{
    Node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

bool searchValue(Node *head, int value)
{
    Node *current = head;
    while(current != NULL)
    {
        if(current->data == value) return 1;
        current = current->next;
    }
    return 0;
}

int askValue()
{
    int value;
    printf("Enter value: ");
    scanf("%d", &value);
    return value;
}

int main(void)
{
    Node *head = NULL;
    int value, mode;

    while (1)
    {
        printf("\n============================\n");
        printf(" Linked List Menu\n");
        printf("============================\n");
        printf("1. Insert at Head\n");
        printf("2. Insert at Tail\n");
        printf("3 Delete the Node\n");
        printf("4. search value\n");
        printf("0. Exit\n");
        printf("----------------------------\n");
        printf("Choose: ");

        if (scanf("%d", &mode) != 1)
        {
            printf("Invalid input. Exiting...\n");
            break;
        }

        if (mode == 0)
        {
            printf("\nExiting program...\n");
            break;
        }

        if (mode != 1 && mode != 2 && mode != 3 && mode != 4)
        {
            printf("Invalid option. Try again.\n");
            continue;
        }

        if (mode == 1)
        {
            askValue();
            insertAtHead(&head, value);
            printf("Inserted %d at HEAD\n", value);
        }
        else if(mode == 2)
        {
            askValue();
            insertAtTail(&head, value);
            printf("Inserted %d at TAIL\n", value);
        }
        else if(mode == 3)
        {
            askValue();
            if(deleteNode(&head, value)) printf("Delete %d \n", value);
            else printf("Value %d not found", value);
        }
        else if(mode == 4)
        {
            int target;
            printf("please input the target value u want to search: ");
            scanf("%d", &target);
            if(searchValue(head, target))
            {
                printf("target value %d found\n", target);
            }
            else printf("target value %d not found\n", target);
        }
        printList(head);

    }

    printf("\nFinal List:");
    printList(head);
    freelist(head);
    return 0;
}