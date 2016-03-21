/**
Given a singly linked list, determine if it is a palindrome.

Follow up:
Could you do it in O(n) time and O(1) space?
**/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
bool compareLists(struct ListNode* p, struct ListNode* q)
{
    printf("Here");
    struct ListNode* temp1 = p;
    struct ListNode* temp2 = q;
    
    // printf("%d,%d",p->val,q->val);
    
    if (temp1 == NULL && temp2 == NULL)
        return true;
 
    while (temp1 && temp2)
    {
        // printf("%d,%d\n",temp1->val,temp2->val);
    
        if (temp1->val == temp2->val)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return false;
    }
    return true;
}

 
void reverse(struct ListNode** headRef)
{
    struct ListNode* prev   = NULL;
    struct ListNode* current = *headRef;
    struct ListNode* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *headRef = prev;
}



bool isPalindrome(struct ListNode* head) 
{
    struct ListNode* slow_ptr = head;
    struct ListNode* fast_ptr = head;
    struct ListNode* second_half;
    struct ListNode* prev_of_slow_ptr = head;
    bool res = true; 
 
    if (head!=NULL && head->next!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            prev_of_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
        if (fast_ptr != NULL)
            slow_ptr = slow_ptr->next;
 
        second_half = slow_ptr;
        prev_of_slow_ptr->next = NULL;
        reverse(&second_half); 
        res = compareLists(head, second_half);
    }
    return res;
    
}