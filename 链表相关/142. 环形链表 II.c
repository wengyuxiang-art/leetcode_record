/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    // 判断条件是本结点不为NULL，就证明存在下一个结点（可以为NULL）
    while(fast!=NULL && fast->next !=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow){
            struct ListNode* node1 = fast;
            struct ListNode* node2 = head;
            while(node1 != node2){
                node1 = node1->next;
                node2 = node2->next;
            }
            return node1;
        }
    }
    return NULL;

}