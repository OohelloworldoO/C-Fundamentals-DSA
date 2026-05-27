struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode *current = head;
    while(current != NULL)
    {
        struct ListNode *next = current->next;
        struct ListNode *previous = &dummy;
        while(previous->next != NULL && previous->next->val < current->val)
        {
            previous = previous->next;
        }
    current->next = previous->next;
    previous->next = current;
    current = next;
    }
    return dummy.next;
}
/*
`.` 指的是結構
`->` 指的是指向結構的 pointer 假如是 Node *ptr 我們要取得裡面的data 就會是 ptr->data 也可以寫 (*ptr).data
*/