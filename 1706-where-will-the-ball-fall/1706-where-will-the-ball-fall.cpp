class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
 int m = grid.size(), n = grid[0].size();
vector<vector<int>>dp(m + 1, vector<int>(n, -1));
for (int j = 0; j < n; j++) 
    dp[m][j] = j; 
        for (int i = m - 1; i >= 0; i--)                        
        {                             
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1) 
                {
                    bool isRightCellRight = (j + 1 == n)? false : (grid[i][j + 1] == 1);
                    if (isRightCellRight) dp[i][j] = dp[i + 1][j + 1]; 
            }
                else if (grid[i][j] == -1)
                {
                    bool isLeftCellLeft = (j - 1 < 0)? false : (grid[i][j - 1] == -1);
                    if (isLeftCellLeft) dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }

        return dp[0];
    }
};