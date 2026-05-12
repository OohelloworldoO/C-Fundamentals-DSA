/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head)
{
    Node *temp = NULL;
    Node *temp2 = NULL;
    while(temp != NULL)
    {
        temp = head->next;
        if(temp->val < head->val)
        {  
            temp2 = head;
            head = temp;
            head->next = temp2;   
        }
        temp = temp->next;
    }
}