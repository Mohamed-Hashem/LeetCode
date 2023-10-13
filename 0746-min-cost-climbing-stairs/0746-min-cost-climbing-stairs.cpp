class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[2] = {cost[0],cost[1]};
        
        for (int i = 2; i < cost.size(); ++i)
            dp[i%2] = cost[i] + min(dp[0],dp[1]);
        
        return min(dp[0],dp[1]);
    }
};