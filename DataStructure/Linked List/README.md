# Linked List

## 1. Definition

Linked List 是一種線性資料結構，由一連串 node 組成。

每個 node 包含：

- data：儲存資料
- next：指向下一個 node 的 pointer

![Linked list](../images/linked%20list.png)

```text
[ data | next ] → [ data | next ] → [ data | next ] → NULL
```

---

## Node Structure

```c
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
```

| member | 用途 |
|------|------|
| data | 儲存數值 |
| next | 指向下一個 Node 的記憶體位址 |

---

## Core Concept

Linked List 的本質不是移動資料，而是：  

改變 pointer 的指向

所有操作（insert / delete / reverse）本質都是：

```text
re-link nodes
```

---

## Traversal

Linked List 一定要透過 traversal 逐個 node 走訪：

```c
Node *current = head;

while(current != NULL)
{
    current = current->next;
}
```

---

## Time Complexity

| Operation | Complexity |
|------|------|
| Insert at head | O(1) |
| Insert at tail | O(n) |
| Traverse | O(n) |
| Search | O(n) |
| Delete | O(n) |
| Reverse | O(n) |

---

## Double Pointer（Node **head）

如果 function 需要「修改 head 本身」，就要用 double pointer。

```c
void insertAtHead(Node **head, int value)
```

原因：

```c
*head = newNode;
```

會改到 main 裡的 head

---

### Single pointer（Node *head）

用在：

- traversal
- search
- print
- 讀取資料

---

### Double pointer（Node **head）

用在：

- insert at head
- delete first node
- reverse linked list
- 初始化 linked list

---

## Common Mistake

- 忘記 malloc
- 忘記 free
- pointer 沒初始化
- null pointer dereference
- node 斷鏈（next 沒接好）
- 混淆 data / pointer
- 忘記先存 next 就改 pointer（reverse 常錯）

---

## Operations List

- insert at head
- insert at tail
- delete node
- search value
- reverse linked list
- print list
- free list

---

## Reverse Linked List（重點）

reverse 的核心：

一個一個 node 反轉 next pointer

---

### 初始狀態

```text
prev = NULL
current = 1 → 2 → 3 → NULL
```

---

### Step 1

先存下一個：

```text
next = 2
```

反轉：

```text
1 → NULL
```

移動：

```text
prev = 1
current = 2
```

---

### Step 2

```text
2 → 1 → NULL
```

移動：

```text
prev = 2
current = 3
```

---

### Step 3

```text
3 → 2 → 1 → NULL
```

最後：

```c
head = prev;
```

---

## Key Insight

Linked List 所有操作都只有一句話：

改 pointer，不動 data