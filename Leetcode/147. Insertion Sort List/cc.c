struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode fakeHead;
    fakeHead.next = NULL;

    struct ListNode *current = head;

    while (current != NULL)
    {
        struct ListNode *next = current->next;

        struct ListNode *previous = &fakeHead;

        while (previous->next != NULL &&
               previous->next->val < current->val)
        {
            previous = previous->next;
        }

        current->next = previous->next;
        previous->next = current;

        current = next;
    }

    return fakeHead.next;
}