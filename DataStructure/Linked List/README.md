# Linked List

## 1. Definition

Linked List 是一種線性資料結構，由一系列 node (節點)組成

每個 node 包含：

- data：儲存資料
- next：指向下一個 node 的 pointer

![Linked list](../images/linked%20list.png)

`[ data | next ] → [ data | next ] → [ data | next ] → NULL`

## Node Structure

```
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
```

| member |           use for            |
| :----: | :--------------------------: |
|  Data  |           儲存數值           |
|  Next  | 指向下一個 Node 的記憶體位址 |

## Core Concept

Linked List 的本質不是「搬動資料」，而是：

_改變 pointer 的指向_

## Time Complexity

|   Operation    | Complexity |
| :------------: | :--------: |
| Insert At Head |   $O(1)$   |
|    Traverse    |   $O(n)$   |
|     Search     |   $O(n)$   |
|     Delete     |   $O(n)$   |

## Common Mistake

- forget `malloc`
- forget `free`
- 沒檢查 NULL newNode
- 搞混 `data`、`pointer`
- 搞混 `malloc 動態空間`
- Double pointer 用途:修改某個 function 內結構裡面的複本 pointer 時 只需要 pointer ,但是需要修改 pointer 本身時就需要 double pointer

## Linked list Map

- insert at head
- insert at tail
- delete node
- search
- reverse linked list

## Reverse Linked list status 變化

reverse 的核心是：

1. prev = NULL（已反轉部分）
2. current = head（還沒處理部分）

```
初始：
prev = NULL
current = 1→2→3

Step1：
prev = 1
current = 2→3

Step2：
prev = 2→1
current = 3

Step3：
prev = 3→2→1
current = NULL
```
