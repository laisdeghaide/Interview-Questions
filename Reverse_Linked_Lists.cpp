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
    ListNode* reverseList(ListNode* head) {
        struct ListNode* newnode = NULL;
        
        while(head != NULL)
        {
            struct ListNode* aux = head->next;
            head->next = newnode;
            newnode = head;
            head = aux;
        }
        return newnode;
    }
};