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
    vector<int> tree;
    
    void preorderTraversalHelper(TreeNode* root) {
        
        if(root!=nullptr){
            tree.push_back(root->val);
            preorderTraversalHelper(root->left);
            preorderTraversalHelper(root->right);
        }
    }
    
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        preorderTraversalHelper(root);
        return tree;
    }
    
};