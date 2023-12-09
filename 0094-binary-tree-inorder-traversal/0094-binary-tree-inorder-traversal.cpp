/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    vector<int> vec;
    void inorderHelper(TreeNode *root)
    {
        if (root != nullptr)
        {
            inorderHelper(root->left);
            vec.push_back(root->val);
            inorderHelper(root->right);
        }
    }
    public:
        vector<int> inorderTraversal(TreeNode *root)
        {
            inorderHelper(root);
            return vec;
        }
};