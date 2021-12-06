/*
    Runtime: 112 ms, faster than 93.29% of C++ online submissions for Range Sum of BST.
    Memory Usage: 64.6 MB, less than 59.94% of C++ online submissions for Range Sum of BST.

    Time Complexity: O(log(n))
    Space Complexity: O(1)
*/

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
    
    int BST(TreeNode* root, int low, int high) {
        if (!root)
            return 0;
        
        if (root->val >= low && root->val <= high) 
            return root->val + BST(root->left, low, high) + BST(root->right, low, high);
        else if (root->val < low)
            return BST(root->right, low, high);
        else if (root->val > high)
            return BST(root->left, low, high);
        return 0;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        return BST(root, low, high);
    }
};