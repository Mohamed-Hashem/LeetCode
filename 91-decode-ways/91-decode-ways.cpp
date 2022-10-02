class Solution {
public:
    int numDecodings(string s) {
        
    vector<int>dp(s.length()+1,0);
        
    if(s[0]=='0')      // for cases like 06 as said in question
        dp[0] = 0;     
      else
        dp[0] = 1;
      
        for(int i=1 ;i < s.length(); i++)
        {
            if(s[i-1] == '0' and s[i] == '0')
                dp[i] = 0;
            else if(s[i-1] == '0' and s[i] != '0')
                dp[i] = dp[i-1];
            else if (s[i-1]!='0' and s[i] == '0')
            {
                if(s[i-1] == '1' or s[i-1] == '2')
                    dp[i] = (i >=2 ? dp[i-2] : 1);
                 else
                     dp[i] = 0;
            }
            else
            {
                if(stoi(s.substr(i-1 , 2)) <= 26)
                    dp[i] = dp[i-1] + (i >=2 ? dp[i-2] : 1);
                else
                    dp[i] = dp[i-1];
            }
        }
        return dp[s.length()-1]; 
    }
};