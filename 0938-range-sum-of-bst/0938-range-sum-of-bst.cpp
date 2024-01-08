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
    int rangeSumBST(TreeNode* root, int low, int high) {
     queue<TreeNode*> q;
        q.push(root);
        
        long long sum = 0;
        
        while(!q.empty()){
            
        TreeNode* front = q.front();
            
            q.pop();       
            
            if (front->left)
                q.push(front->left);
            
            if (front->right)
                q.push(front->right);
            
            if (front->val >= low && front->val <= high)
                sum += front->val;
        }
        
        return sum;
    }
};