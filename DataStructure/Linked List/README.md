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

## Linked list Map

- insert at head
- insert at tail
- delete node
- search
- reverse linked list
