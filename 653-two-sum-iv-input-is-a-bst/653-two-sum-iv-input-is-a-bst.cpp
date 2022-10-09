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
    
    bool DFS(TreeNode * temp, int k, set<int> & ss){
        
        if (temp == nullptr)
            return false;
        
        int num = k - temp->val;
        
        if (ss.find(num) != ss.end())
            return true;
        else 
            ss.insert(temp->val);
        
        return DFS(temp->left,k,ss) || DFS(temp->right,k,ss);
    }
    
public:
    
    bool findTarget(TreeNode* root, int k) {
        
        set<int> ss;
        
        if (root==nullptr)
            return false;
        else 
            return DFS(root , k ,ss );
        
    }
};