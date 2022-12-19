class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n]; // Adjacency list
        if(source==destination)
            return true;
        
        for(auto &edge:edges){
            adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].push_back(edge[1]);
        }
        vector<bool> vis(n,false);

        queue<int> q;
        q.push(source); 
        
        vis[source]=true;
        
        while(!q.empty()){
            int node =q.front();
            q.pop();
            if(node == destination){
                return true; // we got the destination
            }
                
            for(int connected_node:adj[node]){
                
                if(!vis[connected_node]){
                    vis[connected_node]=true;
                    
                    q.push(connected_node);
                }
            }
        }
        return false; // not reach to the destination
    }
};