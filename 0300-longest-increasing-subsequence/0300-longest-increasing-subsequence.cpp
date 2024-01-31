class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int ans = 0;
        
        int n =nums.size();
        
        vector<int> dp(n, 1);
        
        for(int i = 0; i < n; i++) {
            
            for(int j = i + 1; j < n; j++) {
                
                if(nums[j] > nums[i]) 
                    dp[j] = max(dp[j], dp[i]+1);
            }
        }
        
        for(int x : dp) 
            ans = max(ans, x);
    
        return ans;     
    }
};