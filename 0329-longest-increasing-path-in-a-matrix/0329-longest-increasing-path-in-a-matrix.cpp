class Solution {
    
    int n,m,ans = 0;
    using vvi = vector<vector<int>>;
    
    vector<int>  dx{0,0,1,-1}, dy{1,-1,0,0};
    
    int dfs(int i,int j,vvi& matrix,vvi& dp){
        
        if(dp[i][j]!=1) 
            return dp[i][j];
        int mx = 0;
        
        for(int k = 0;k<4;k++){
            int x = i + dx[k];
            int y = j + dy[k];
            
            if(x<0 || y<0 || y>=m || x>=n)
                continue;
            
            if(matrix[x][y]<matrix[i][j]) 
                mx = max(mx,dfs(x,y,matrix,dp));
        }
        
        return dp[i][j] = mx + 1;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size(),m = matrix[0].size();
        vvi dp(n,vector(m,1));
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                
                if(dp[i][j]==1)
                    ans = max(ans,dfs(i,j,matrix,dp));
            }
        } 
        
        return ans;
    }
};