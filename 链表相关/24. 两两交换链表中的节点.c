/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy = {0, head};
    struct ListNode* cur = &dummy;
    while(cur->next != NULL && cur->next->next != NULL){
        struct ListNode* tmp1 = cur->next;
        struct ListNode* tmp2 = cur->next->next->next;
        
        cur->next = cur->next->next;
        cur->next->next = tmp1;
        cur->next->next->next = tmp2;

        cur = cur->next->next;
    }
    return dummy.next;

}