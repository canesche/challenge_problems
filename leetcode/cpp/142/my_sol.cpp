/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
    Runtime: 4 ms, faster than 98.38% of C++ online submissions for Linked List Cycle II.
    Memory Usage: 7.4 MB, less than 89.47% of C++ online submissions for Linked List Cycle II.

    Time Complexity: O(n), We need pass thought the Linkedlist twice.
    Space Complexity: O(1), We don't use a memory, only pointers. 
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if (!head or !head->next) return nullptr;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
            
            if (slow == fast) break;
        }
        
        if (slow != fast) 
            return nullptr;
        
        slow = head; 
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};