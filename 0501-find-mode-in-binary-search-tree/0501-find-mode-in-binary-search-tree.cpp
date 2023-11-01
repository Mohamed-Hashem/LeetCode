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
    vector<int> findMode(TreeNode* root) {
    if (root == NULL) 
            return {}; 
        
        unordered_map<int, int> times;
        
        int max = INT_MIN;
        
        vector<int> answer;
        
        queue<TreeNode*> q; 
        
        q.push(root);

        while (!q.empty()) 
        { 
            TreeNode* curr = q.front();
            times[curr->val]++;
            
            max = (times[curr->val] > max) ? times[curr->val] : max;
            q.pop();
            
            if(curr->left) 
                q.push(curr->left);
            
            if(curr->right) 
                q.push(curr->right);
        }
        
        for(auto num : times) 
            if(num.second == max) 
                answer.push_back(num.first);
        
        return answer;
    }
};