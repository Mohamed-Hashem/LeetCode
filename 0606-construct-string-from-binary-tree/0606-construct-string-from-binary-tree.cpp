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
    void DFS(TreeNode *root, string &str)
    {

        if (root == nullptr)
            return;

        if (root != nullptr)
        {
            str += to_string(root->val);
            
            if (root->left || root->right)
            {
                str += '(';
                DFS(root->left, str);
                str += ')';
            }

            if (root->right)
            {
                str += '(';
                DFS(root->right, str);
                str += ')';
            }
        }
    }

    public:
        string tree2str(TreeNode *root)
        {
            string str;
            DFS(root, str);

            return str;
        }
};