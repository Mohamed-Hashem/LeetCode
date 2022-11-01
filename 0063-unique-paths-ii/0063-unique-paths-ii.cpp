class Solution {
        int solve(int i, int j, vector<vector<int>> &dp, vector<vector<int>>& grid)
    {
        if(grid[i][j]==1) return 0;
        
        if(i==0 and j==0) return 1;
        if(i==0) return dp[i][j-1];
        if(j==0) return dp[i-1][j]; 
            
        return dp[i-1][j] + dp[i][j-1];
    }
    
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        
        if(obstacleGrid[n-1][m-1]==1) return 0;
        
        vector<vector<int>> dp(n, vector<int> (m,0));
        
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        dp[i][j] = solve(i,j,dp, obstacleGrid);
        
        return dp[n-1][m-1];
    }
};