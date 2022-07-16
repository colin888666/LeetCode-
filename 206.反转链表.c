/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){

    if(head == NULL || head -> next == NULL)
        return head;

    typedef struct ListNode ListNode;
    ListNode* pre = head;
    ListNode* cur = head -> next;

    while (cur != NULL)
    {
        ListNode* tmp = cur -> next;
        cur -> next = pre;

        pre = cur;
        cur = tmp;
    }
    
    head -> next = NULL;
    return pre;
}
// @lc code=end

