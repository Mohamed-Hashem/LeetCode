class Solution
{
    public:
        vector<vector < int>> onesMinusZeros(vector<vector < int>> &grid)
        {

            int m = grid.size();
            int n = grid[0].size();

            vector<int> row(m,0);
            vector<int> col(n,0);

            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    row[i] += 2 *grid[i][j] - 1;
                    col[j] += 2 *grid[i][j] - 1;
                }
            }

            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    grid[i][j] = row[i] + col[j];
                }
            }

            return grid;
        }
};