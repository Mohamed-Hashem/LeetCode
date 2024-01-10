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

    unordered_map<int, vector < int>> graph;

    void buildGraph(TreeNode *root)
    {

        if (root == nullptr)
            return;

        if (root->left)
        {
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
        }

        if (root->right)
        {
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
        }

        buildGraph(root->left);
        buildGraph(root->right);
    }

    int BFS(int start)
    {
        queue<pair<int, int>> q;

        int distance = 0;

        q.push({ start, distance });

        set<int> st;

        st.insert(start);

        while (!q.empty())
        {

            pair<int,int> pr = q.front();	// point, distance
            
            q.pop();

            int current = pr.first;
            
            int dist = pr.second;
            
            for (int child: graph[current])
            {

                if (st.find(child) == st.end())
                {
                    q.push({ child, dist + 1 });
                    distance = max(distance, dist + 1);
                    st.insert(child);
                }
            }
        }

        return distance;
    }

    public:
        int amountOfTime(TreeNode *root, int start)
        {
            buildGraph(root);

            int amount = BFS(start);

            return amount;
        }
};