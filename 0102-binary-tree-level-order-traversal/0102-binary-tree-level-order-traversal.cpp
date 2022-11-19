/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        
        if(root == NULL)
            return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int n;
        TreeNode* cur;
        
        while(!q.empty()) {
            
            n = q.size();
            vector<int> level;
            
            for(int i = 0; i < n; i++) {
                
                cur = q.front();
                q.pop();
                level.push_back(cur -> val);
                
                if(cur -> left)
                    q.push(cur -> left);
                
                if(cur -> right)
                    q.push(cur -> right);
            }
            
            result.push_back(level);
        }
        
        return result;
    }
};