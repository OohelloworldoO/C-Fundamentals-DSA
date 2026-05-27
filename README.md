# C-Fundamentals-Data-Structures

## Project Overview

This repository contains my implementations of fundamental data structures and algorithms in C, along with system-level programming practices.

Focus:

- Pointer and memory management
- Data structure implementation (stack, queue, linked list)
- Algorithm practice
- Performance understanding

## Skills

- C programming (pointer, memory, scope)
- Data structures (stack, linked list, queue)
- Algorithm implementation
- Basic system programming concepts

## Structure

- C_Fundamentals/
  - pointer/
  - memory_management/ (malloc / free)
  - recursion/
  - file_io/
  - memory_model/

- DataStructure/
  - array/ dynamic array
  - linked_list/
  - stack/
  - queue/
  - deque/
  - hash_table/
  - heap/
  - binary_search_tree/
  - graph/
  - union_find/

- Algorithm/
  - 0_foundation/
    - binary_search/
    - linear_search/

  - 1_sorting/
    - bubble_sort/
    - selection_sort/
    - insertion_sort/
    - merge_sort/
    - quick_sort/

  - 2_Recursion Divide-and-Conquer/
    - recursion_basics/
    - binary_search_recursive/
    - merge_sort/
    - quick_sort/

  - 3_core_patterns/
    - two_pointers/
    - sliding_window/
    - prefix_sum/

  - 4_tree_graph_basics/
    - DFS/
    - BFS/
    - Dijkstra

  - 5_data_structure_related/
    - heap/
    - union_find/

  - 6_advanced_topics/
    - greedy/
    - backtracking/
    - dynamic_programming/

  - 7_special_topics/
    - string_algorithm/
    - bit_manipulation/

- Leetcode/

## README 重點

| 類型           | 重點          |
| -------------- | ------------- |
| Data Structure | 設計 + 操作   |
| Algorithm      | 流程 + 複雜度 |

## 進度

|   日期    | 進度                                                                                                                                             |
| :-------: | :----------------------------------------------------------------------------------------------------------------------------------------------- |
| 2026/3/20 | 基本數據類型、常量變量、位運算、表達式                                                                                                           |
| 2026/3/24 | 開發工具和規格標準、資料型別、迴圈、邏輯運算子                                                                                                   |
| 2026/3/25 | do-while迴圈、韓信點兵(chinese remainder theorem)、stack                                                                                         |
| 2026/3/26 | 質數判斷、C Function Standard、math.h 、scope                                                                                                    |
| 2026/4/2  | scope、random implementations、latex(數學公式markdown)                                                                                           |
| 2026/4/7  | function recursion                                                                                                                               |
| 2026/4/8  | function recursion implement、array、bubble sort                                                                                                 |
| 2026/4/14 | strcmp、strncmp、strcpy                                                                                                                          |
| 2026/4/15 | bubble sort 、關於陣列的記憶體配置                                                                                                               |
| 2026/4/16 | matrix(by two array)、pointer(記憶體位址 int *p 、 記憶體位址的值 *p 差別)                                                                       |
| 2026/4/17 | pointer + array、malloc(free、segmentation fault、sizeof)                                                                                        |
| 2026/4/18 | swap、struct                                                                                                                                     |
| 2026/4/19 | struct、malloc、stack、queue                                                                                                                     |
| 2026/4/20 | binary search(bubble sort + stack pop + binary search)、linear search、queue                                                                     |
| 2026/4/21 | binary search(sort + stack pop + binary search)+ leetcode(two sum)                                                                               |
| 2026/4/25 | binary search(duplicates first occurrence)、 bubble sort、insertion sort、early stopping                                                         |
| 2026/4/26 | insertion sort 、leetcode(1、34、35、704)                                                                                                        |
| 2026/4/27 | quick sort、linked list(需要self-referencing，了解 `typedef sturct` 跟 `struct{}` 差異、型別與函式)、dijkstra algo 、leetcode(147)、queue (暫定) |
| 2026/4/28 | linked list                                                                                                                                      |
| 2026/4/30 | linked list(insert at head)                                                                                                                      |
| 2026/5/1  | linked list(insert at tail)                                                                                                                      |
| 2026/5/6  | linked list(insert at tail、 delete node、search、reverse)                                                                                       |
| 2026/5/7  | linked list(search)                                                                                                                              |
| 2026/5/9  | linked list(search、double pointer)                                                                                                              |
| 2026/5/12 | queue、leetcode(147)、insertion sort(linked list ver.)、structure type                                                                           |
| 2026/5/19 | leetcode 147                                                                                                                                     |
| 2026/5/20 | leetcode(21、147、206、2095)、merge sort、tree、quick sort                                                                                       |
| 2026/5/28 | leetcode 147 、 tree、merge                                                                                                                      |

## Reference

|    Author     |                                                                                                                                              |
| :-----------: | :------------------------------------------------------------------------------------------------------------------------------------------- |
|  Feis Studio  | [C 語言入門](https://www.youtube.com/playlist?list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx)                                                       |
| Jserv 黃敬群  | [你所不知道的 C 語言](https://hackmd.io/@sysprog/c-programming)                                                                              |
| GeeksforGeeks | [DataStructure for C implementation](https://www.geeksforgeeks.org/c/implement-stack-in-c/)                                                  |
|   sparanoid   | [文案排版指北](https://github.com/sparanoid/chinese-copywriting-guidelines/blob/master/README.md)                                            |
|    ISO/IEC    | [ISO/IEC 1999(E)](https://www.dii.uchile.cl/~daespino/files/Iso_C_1999_definition.pdf)                                                       |
|    Cynthia    | [常用 LaTeX 數學符號指令](https://hackmd.io/@CynthiaChuang/Basic-LaTeX-Commands)                                                             |
| CodeCrafters  | [Build your own insert-technology](https://github.com/codecrafters-io/build-your-own-x)                                                      |
|               | [Learn DSA in C: Master Data Structures and Algorithms Using C](https://www.geeksforgeeks.org/c/learn-dsa-in-c/)                             |
|               | [Data structures and algorithms study cheatsheets for coding interviews](https://www.techinterviewhandbook.org/algorithms/study-cheatsheet/) |

## Command

`gcc/g++ 要生成執行檔名 -o 執行檔名`  
`./a.exe`

## Note

|               C                | 標準函式庫與標頭檔 |                   常用功能                    |
| :----------------------------: | :----------------: | :-------------------------------------------: |
|            字串處理            |     <string.h>     |                                               |
|            數學運算            |      <math.h>      |  sqrt(平方根)、ceil(無條件進位)、abs(絕對值)  |
|         輸入與輸出處理         |     <stdio.h>      | printf(從標準輸出輸出)、scanf(從標準輸入輸入) |
|    通用工具庫(涵記憶體管理)    |     <stdlib.h>     |                                               |
|                                |      <time.h>      |                                               |
| 其他跟operating system相關功能 |                    |                                               |

## ToDoList

| ToDoList                                                            |        Date         |
| :------------------------------------------------------------------ | :-----------------: |
| 1. C Fundamentals                                                   | 2026/3/20-2026/4/19 |
| 2. DataStructure implementation                                     |     2026/4/19-      |
| 3. Algorithm implementation                                         |     2026/4/20-      |
| 4. [Leetcode Grind 75](https://leetcode.com/problem-list/rab78cw1/) |     2026/4/26-      |
| 5. Jserv                                                            |                     |
| 6. file parser                                                      |                     |
| 7. mini shell                                                       |                     |
| 8. memory allocator                                                 |                     |
| 9. my own operating system                                          |                     |

## DSA

### Data Structures

|    Data Structure     | Status |   Date    |
| :-------------------: | :----: | :-------: |
| Array / Dynamic Array | ✔ Done | 2026/4/17 |
|         Stack         | ✔ Done | 2026/4/19 |
|      Linked List      | ✔ Done | 2026/5/11 |
|         Queue         | ✔ Done | 2026/5/12 |
|                       |        |           |

---

### Algorithms

|   Algorithm    | Status  |   Date    |
| :------------: | :-----: | :-------: |
| Binary Search  | ✔ Done  | 2026/4/25 |
|  Bubble Sort   | ✔ Done  | 2026/4/25 |
| Insertion Sort | ✔ Done  | 2026/4/26 |
| Selection Sort | ⏳ Todo |           |
|   Merge Sort   | ⏳ Todo |           |
|   Quick Sort   | ✔ Done  |           |
| Linear Search  | ✔ Done  |           |
|      BFS       | ⏳ Todo |           |
|      DFS       | ⏳ Todo |           |
|    Dijkstra    | ⏳ Todo |           |
