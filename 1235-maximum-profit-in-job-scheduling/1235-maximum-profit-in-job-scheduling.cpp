class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
               // step 1: generate the sorting index such that endTime[index[i]] <= endTime[index[i+1]] for 0 <= i < n-1

        auto comp = [&endTime](const int i1, const int i2) { return endTime[i1] < endTime[i2]; };
        int n = endTime.size();
        
        vector<int> index(n);

        iota(index.begin(), index.end(), 0);
        
        sort(index.begin(), index.end(), comp);
        
        // step 2: in order to perform binary search, we also need the sorting endTime array
        
        vector<int> endSorted(endTime.begin(), endTime.end());
        
        sort(endSorted.begin(), endSorted.end());
        
        
        // step 3: calculate dp table

        vector<int> dp(n + 1);

        for (int i = 1; i <= n; i++) {
            int j = upper_bound(endSorted.begin(), endSorted.end(), startTime[index[i-1]]) - endSorted.begin();
            dp[i] = max(dp[i-1], profit[index[i-1]] + dp[j]);
        }
        
        return dp[n]; 
    }
};