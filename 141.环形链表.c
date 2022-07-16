/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool hasCycle(struct ListNode *head) {

    typedef struct ListNode ListNode;
    ListNode* fast = head;
    ListNode* slow = head;



    // // while (fast != NULL && fast->next != NULL)
    //  while(fast != NULL && fast->next != NULL)
    // {
    //     /* code */
    //     fast = fast->next->next;
    //     slow = slow->next;
    
    //     if (fast == slow)
    //         return true;
    // }
    
    // return false;
    

    // typedef struct ListNode ListNode;

    // ListNode* fast = head;
    // ListNode* slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
            return true;
    }

    return false;

}
// @lc code=end

