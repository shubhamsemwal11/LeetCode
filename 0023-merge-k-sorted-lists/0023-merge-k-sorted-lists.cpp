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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int,         ListNode*>>> pq;
        
        ListNode * dummy = new ListNode(-1);
        ListNode* temp = dummy;
        
        for(ListNode* head: lists) {
            
            if(head)
                pq.push({head -> val, head});
        }
        
        while(!pq.empty()) {
            
            pair<int, ListNode*> cur = pq.top();
            pq.pop();
            
            temp -> next = cur.second;
            temp = temp -> next;
            
            if(cur.second-> next)
                pq.push({cur.second -> next -> val, cur.second -> next});
        }
        
        temp = dummy -> next;
        delete dummy;
        
        return temp;
    }
};