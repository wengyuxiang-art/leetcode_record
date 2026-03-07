/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode dummy = {0, head};
    struct ListNode* fast = &dummy;
    struct ListNode* slow = &dummy;

    // 让fast先走n步(0->(n-1)是n步）,走到头之后slow还剩n步到头
    for(int i=0; i<n; i++){
        fast = fast->next;
        }
    // fast最后停在NULL前,slow最后停在n前
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;
    return dummy.next;
}