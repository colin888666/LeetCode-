/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){

    typedef struct ListNode ListNode;
    ListNode* pre = (ListNode*)malloc(sizeof(ListNode));
    pre -> next = head;
    ListNode* cur = pre;
    
    while (cur -> next != NULL)
    {
        if (cur -> next -> val == val)
            cur -> next = cur -> next -> next;
        else
            cur = cur -> next;
    }

    return pre -> next;
}
// @lc code=end

