/**
Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
**/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) 
{   
    struct ListNode *slowPtr = head;
    struct ListNode *fastPtr = head;
    while(slowPtr && fastPtr && fastPtr->next)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr)
            return true;
    }
    return false;
    
}   

