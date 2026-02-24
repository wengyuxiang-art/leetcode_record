/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//  递归------------------------------------------------------------------
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head == NULL){
        return head;
    }

    head->next = removeElements(head->next, val);

    if(head->val == val){
        struct ListNode* res = head->next;
        free(head);
        return res;
    } else{
        return head;
    }

}

//  虚拟头结点（将head和其余结点以统一的方式删除）------------------------------------------------------------------
struct ListNode* removeElements(struct ListNode* head, int val) {
    // val=0
    // next = head
    struct ListNode dummy = {0, head};
    struct ListNode* cur = &dummy;
    while (cur->next){
        struct ListNode* nxt = cur->next;
        if(nxt->val == val){
            cur->next = nxt->next;
            free(nxt);
        } else{
            cur = nxt;
        }
    }
    return dummy.next;
    // 返回虚拟头结点的下一个结点
}