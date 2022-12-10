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
    long long totalSum = 0;
        
    void sum(TreeNode* root) {
        
        if(root == NULL)
            return;
        
        totalSum += root -> val;
        
        sum(root -> left);
        sum(root -> right);
    }
    
    int solve(TreeNode* root, long long &result) {
        
        if(root == NULL)
            return 0;
        
        long long left = solve(root -> left, result);
        long long right = solve(root -> right, result);
        
        long long curSum = left + right + root -> val;
        
        result = max(result, (curSum * (totalSum - curSum)));
        
        return curSum;
    }
    
    int maxProduct(TreeNode* root) {
        
        long long result = 0;
        
        sum(root);
        
        solve(root, result);
        
        return (result % 1000000007);
        
    }
};