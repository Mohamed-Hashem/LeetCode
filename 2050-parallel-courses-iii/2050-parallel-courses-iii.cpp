class Solution {

    unordered_map<int, vector<int>> graph;
    
    vector<int> memo;
    
        int dfs(int node, vector<int>& time) {
        if (memo[node] != -1) {
            return memo[node];
        }
        
        if (graph[node].size() == 0) {
            return time[node];
        }
        
        int ans = 0;
        for (int neighbor: graph[node]) {
            ans = max(ans, dfs(neighbor, time));
        }
        
         memo[node] = time[node] + ans;
        return memo[node];
    }
    
public:    
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) { 
        for (vector<int>& edge: relations) {
            int x = edge[0] - 1;
            int y = edge[1] - 1;
            graph[x].push_back(y);
        }
        
        memo = vector(n, -1);
        int ans = 0;
        for (int node = 0; node < n; node++) {
            ans = max(ans, dfs(node, time));
        }
        
        return ans;
    }
};