class Solution {
    
           void dfs(vector<int> adj[] , int src , vector<int> vis , vector<int> temp , vector<vector<int>>& res , int dst){
        if(src == dst){
            temp.push_back(src);
            res.push_back(temp);
            return;
        }
               
        vis[src] = 1;
        temp.push_back(src);
        for(auto v : adj[src]){
            if(vis[v] == 0){
                dfs(adj , v , vis , temp , res , dst);
            }
        }
    }
    
public:

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];
        
        for(int i = 0 ; i < n ; i++){
            for(auto it : graph[i]){
                adj[i].push_back(it);
            }
        }
        vector<int> vis(n , 0);
        vector<int> ans;
        
        vector<vector<int>> res;
        dfs(adj , 0 , vis , ans , res , n-1);
        
        return res;
    }
};