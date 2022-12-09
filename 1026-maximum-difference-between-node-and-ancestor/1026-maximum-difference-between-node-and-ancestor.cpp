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
    
    void solve(TreeNode* root, int maxx, int minn, int& diff) {
        
        if(root == NULL)
            return;
        
        maxx = max(maxx, root -> val);
        minn = min(minn, root -> val);
        
        diff = max(diff, maxx - minn);
        
        solve(root -> left, maxx, minn, diff);
        solve(root -> right, maxx, minn, diff);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        int diff = INT_MIN, maxx = INT_MIN, minn = INT_MAX;
        
        solve(root, maxx, minn, diff);
        
        return diff;
    }
};