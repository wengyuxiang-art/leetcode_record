/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

    // 注意这里要声明struct
    struct ListNode* cur = head;
    struct ListNode* pre = NULL;

    while(cur != NULL){
        // 先反转再移动

        // tmp存的是cur->next
        // 如果存cur（tmp=cur; cur->next=pre; cur=cur->next; pre=cur), 
        // 此时cur->next已经不是本节点的下个节点了，而是pre，会导致逻辑错误
        struct ListNode* tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}