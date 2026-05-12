# Queue

## Definition

**First In First Out (FIFO)**

![queue](../images/queue.png)

Queue 是一種線性資料結構，元素的加入發生在尾端（rear），移除發生在前端（front）。

## Core Idea

Queue 的核心不是「搬動資料」，而是：

> **透過 front / rear pointer 來控制資料進出順序**

本質上是「pointer 的移動」，不是資料的移動。

## Operations

- **enqueue**：從 rear 插入元素
- **dequeue**：從 front 移除元素
- **peek**：查看 front 元素
- **isEmpty**：判斷 queue 是否為空

## Implementation Types

### 1. Array-based Queue

- 使用固定或動態陣列
- 需要處理 circular buffer

### 2. Linked List-based Queue

- 使用 node + pointer
- front / rear 動態變動

## Complexity

| Operation | Complexity |
| --------- | ---------- |
| Enqueue   | O(1)       |
| Dequeue   | O(1)       |
| Peek      | O(1)       |
| Traverse  | O(n)       |

---

## Edge Cases

- 空 queue（front == NULL）
- 只剩一個 node（dequeue 後 front/rear 都要變 NULL）
- enqueue 第一個元素（front = rear = newNode）
- dequeue 最後一個元素
- NULL pointer access

---

## Use Cases

- BFS（Breadth First Search）
- task scheduling
- buffer system
- printer queue
- CPU process scheduling

---

## Implementation

### Node structure

```c
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
```
