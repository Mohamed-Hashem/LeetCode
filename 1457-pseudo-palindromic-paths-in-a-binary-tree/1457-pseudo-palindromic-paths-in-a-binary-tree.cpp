/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    int count = 0;

    void dfs(TreeNode *node, set<int> remaining)
    {
        if (remaining.count(node->val))
            remaining.erase(node->val);
        else
            remaining.insert(node->val);
        
        if (!node->left &!node->right)
        {
            if (remaining.size() <= 1) 
                count++;
            
            return;
        }

        if (node->left)
            dfs(node->left, remaining);

        if (node->right)
            dfs(node->right, remaining);
    }

    public:
        int pseudoPalindromicPaths(TreeNode *root)
        {
            if (!root)
                return 0;

            set<int> mys;
            dfs(root, mys);
            return count;
        }
};