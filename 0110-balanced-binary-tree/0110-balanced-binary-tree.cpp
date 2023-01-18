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
    
    int solve(TreeNode* root, bool &isBalance) {
        
        if(root == NULL)
            return 0;
        
        if(isBalance == false)
            return 0;
        
        int left = solve(root -> left, isBalance);
        int right = solve(root -> right, isBalance);
        
        if(abs(left - right) > 1) {
            
            isBalance = false;
            return 0;
        }
        
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        
        bool isBalance = true;
        solve(root, isBalance);
        
        if(isBalance == true)
            return true;
        
        return false;
    }
};