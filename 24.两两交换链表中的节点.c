/*
 * @lc app=leetcode.cn id=24 lang=c
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){

    if (head == NULL || head -> next == NULL)
        return head;

    typedef struct ListNode ListNode;
    ListNode* pre = (ListNode*)malloc(sizeof(ListNode));
    pre -> next = head;
    ListNode* left = pre;
    ListNode* right = head;

    while (left != NULL && right != NULL && right -> next != NULL)
    {
        left -> next = right -> next;
        ListNode* tmp = right -> next -> next;
        right -> next -> next = right;
        right -> next = tmp;

        left = right;
        right = right -> next;
    }
    
    return pre -> next;
}
// @lc code=end

