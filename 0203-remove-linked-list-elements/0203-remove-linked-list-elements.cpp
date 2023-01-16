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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL)
            return NULL;
        
        while(head != NULL && head -> val == val)
            head = head -> next;
        
        ListNode* cur = head, *prev = NULL;
        
        while(cur) {
            
            if(cur -> val == val) {
                
                ListNode* temp = cur;
                prev -> next = cur -> next;
                cur = cur -> next;
                delete temp;
            }
            
            else {
                
                prev = cur;
                cur = cur -> next;
            }
            
        }
        
        return head;
    }
};