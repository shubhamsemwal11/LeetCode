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
    
    ListNode* reverse(ListNode* head) {
        
        ListNode* cur = head, *prev = NULL, *next;
        
        while(cur) {
            
            next = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head, *fast = head;
        ListNode* middle;
        
        while(fast && fast -> next) {
            
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        middle = reverse(slow);
        fast = head;
        
        while(middle) {
            
            if(fast -> val != middle -> val)
                return false;
            
            fast = fast -> next;
            middle = middle -> next;
        }
        
        return true;
    }
};