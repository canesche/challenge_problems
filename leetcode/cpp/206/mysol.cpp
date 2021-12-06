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
    /* Interactive solution
        Time Complexity: O(n)
        Space Complexity: O(1)
    */
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
    
    /* -- Recursive solution
    ListNode* reverseList(ListNode* head) {
        if(!head || !(head->next))
            return head;
        ListNode* node = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return node;
    }*/
};