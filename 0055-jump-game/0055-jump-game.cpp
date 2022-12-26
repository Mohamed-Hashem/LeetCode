class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        
        vector<int> dp(n+maxi+1,0);
        
        for(int i=n-1;i<dp.size();i++){
            dp[i]=1;
        }
        
        for(int i=n-2;i>=0;i--){
            
            if(nums[i]==0){
                dp[i]=0;
            }
            else{
                bool ans=0;
                for(int j=1;j<=nums[i];j++){
                    ans=ans|dp[i+j];
                    if(ans) break;
                }
                dp[i]=ans;
            }
        }
        
        return dp[0];
    }
};