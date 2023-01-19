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
    
    void solve(TreeNode* root, vector<int> &result, int &maxLevel, int curLevel) {
        
        if(root == NULL)
            return;
        
        if(curLevel > maxLevel) {
            
            result.push_back(root -> val);
            maxLevel = curLevel;
        }
        
        solve(root -> right, result, maxLevel, curLevel + 1);
        solve(root -> left, result, maxLevel, curLevel + 1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        int maxLevel = -1;
        
        vector<int> result;
        
        solve(root, result, maxLevel, 0);
        
        return result;
        
    }
};