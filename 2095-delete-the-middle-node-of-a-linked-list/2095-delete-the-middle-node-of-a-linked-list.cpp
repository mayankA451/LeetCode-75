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
    
    ListNode*mid(ListNode*head){
        if(head == NULL){
            return NULL;
        }
        
        ListNode*fast = head;
        ListNode*slow = head;
        ListNode*prev = NULL;
        
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(!prev){
            return NULL;
        }
        
        prev->next = slow->next;
        return head;
    }
    
    
    ListNode* deleteMiddle(ListNode* head) {
        return mid(head);
    }
};