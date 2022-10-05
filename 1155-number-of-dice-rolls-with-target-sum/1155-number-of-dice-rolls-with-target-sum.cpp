class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        
     int m=pow(10,9)+7;
        
        vector<vector<int>>dp(n+1, vector<int>(target+1,0));
        
        dp[0][0]=1;
        
        for(int i=1; i<=n; i++){
            
            for(int j=1; j<=target; j++){
                int ans=0;
                
                for(int f=1; f<=k; f++){
                    
                    if(j-f>=0)
                        ans=(ans+(dp[i-1][j-f]%m))%m;
                }
                
                dp[i][j]=ans%m;
            }
        }
        return dp[n][target];   
    }
};