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
    
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &n, unordered_map<int,       int>& mp, int &preOrderStart, int inOrderStart, int inOrderEnd) {
        
        if(preOrderStart == n || (inOrderStart > inOrderEnd))
            return NULL;
        
        int element = preorder[preOrderStart];
        preOrderStart++;
        
        int position = mp[element];
        
        TreeNode* root = new TreeNode(element);
        
        root -> left = solve(preorder, inorder, n, mp, preOrderStart, inOrderStart, position - 1);
        
        root -> right = solve(preorder, inorder, n, mp, preOrderStart, position + 1, inOrderEnd);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = inorder.size();
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++)
            mp[inorder[i]] = i;
        
        int preOrderStart = 0, inOrderStart = 0, inOrderEnd = n - 1;
        
        TreeNode* root = solve(preorder, inorder, n, mp, preOrderStart, inOrderStart,                                inOrderEnd);
        
        return root;
    }
};