
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
}
struct ListNode* insertionSortList(struct ListNode* head)
{
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode *current = head; // 我們把unsorted node head 拿出來

}

/*
`.` 指的是結構
`->` 指的是指向結構的 pointer 假如是 Node *ptr 我們要取得裡面的data 就會是 ptr->data 也可以寫 (*ptr).data
*/