/*
 * @lc app=leetcode.cn id=19 lang=c
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start

//  * Definition for singly-linked list.
//   typedef struct ListNode {
//       int val;
//       struct ListNode *next;
//   } ListNode;
 
// # include "Node.h"

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

    typedef struct ListNode ListNode;

    ListNode* pre = (ListNode*)malloc(sizeof(ListNode));
    pre -> next = head;
    ListNode* fast = pre;
    ListNode* slow = pre;

    while (n > 0)
    {
        fast = fast -> next;
        n--;
    }


    while (fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next;
    }
    
    slow -> next = slow -> next -> next;

    return pre -> next;
    
}
// @lc code=end

