/*
    Runtime: 8 ms, faster than 92.49% of C++ online submissions for Odd Even Linked List.
    Memory Usage: 10.5 MB, less than 72.43% of C++ online submissions for Odd Even Linked List.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if (!head) return head;
        
        ListNode *odd = head;
        ListNode *evenHead = head->next;
        ListNode *even = evenHead;
        
        while (even && even->next) {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        
        return head;
    }
};