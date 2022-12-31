class Solution {
    vector<vector<int>> grids;
    int n, m, ans, zero;

    void dfs(int x, int y) {
        
        if(x < 0 or x >= n or y < 0 or y >= m or grids[x][y] == -1) {
            return;
        }
        
        if(grids[x][y] == 2) {
            
            if(zero == -1)
                ans++;
            
            return;
        }
        
        grids[x][y] = -1;
        zero--;
        
        dfs(x-1, y);
        
        dfs(x+1, y);
        
        dfs(x, y-1);
        
        dfs(x, y+1);
        
        zero++;
        
        grids[x][y] = 0;
    }
    
public:


    int uniquePathsIII(vector<vector<int>>& grid) {
        grids = grid;
        
        n = grid.size(), m = grid[0].size();
        
        int sx, sy;;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                
                if(grid[i][j] == 1) 
                    sx = i, sy = j;
                else if(grid[i][j] == 0) 
                    zero++;
            }
        }
        
        dfs(sx, sy);
        return ans;
    }
};