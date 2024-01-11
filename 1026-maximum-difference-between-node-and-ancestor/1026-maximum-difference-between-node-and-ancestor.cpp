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
    
    int result = INT_MIN;
    
    void preOrder(TreeNode* root, int maximum = INT_MIN, int minmum = INT_MAX){
        
        if (root != nullptr){
                        
            maximum = max(maximum, root->val);
            
            minmum = min(minmum, root->val);
            
            result = max(result, abs(maximum - minmum));
            
            preOrder(root->left, maximum , minmum);
            
            preOrder(root->right , maximum , minmum);
        }
    }
    
public:
    int maxAncestorDiff(TreeNode* root) {
       preOrder(root);        
        return result;
    }
};