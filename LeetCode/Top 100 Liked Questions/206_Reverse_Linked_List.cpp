/* Problem Link: https://leetcode.com/problems/reverse-linked-list/
Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Solution 1 (Iterative)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }
        ListNode *prev = NULL, *current = head, *next = NULL;
        while (current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};

// Solution 2 (recursive)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode *new_head = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return new_head;
    }
};
