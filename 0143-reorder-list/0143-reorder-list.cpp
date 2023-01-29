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
    
    ListNode* middle(ListNode* head) {
        
        ListNode* slow = head, *fast = head -> next;
        
        while(fast && fast -> next) {
            
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head) {
        
        ListNode * prev = NULL, *next, *cur = head;
        while(cur) {
            
            next = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next;
        }
        
        return prev;
    }
    
    void reorderList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL || head -> next -> next == NULL)
            return;
    
        
        ListNode* mid = middle(head);
        
        ListNode* secondHalf = mid->next;
        
        mid->next=NULL;
        
        ListNode* revHalf = reverse(secondHalf);
        
        ListNode* temp;
        
        while(head != NULL && revHalf != NULL)
        {
            temp = head->next;
            
            head->next=revHalf;
            
            revHalf=revHalf->next;
            
            head->next->next=temp;
            
            head = temp;
        }
    }
};