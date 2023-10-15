class Solution {
public:
   const int MOD = 1000000007;

public:
    int numWays(int steps, int arrLen) {
        vector<unordered_map<int, long long>> vec(steps);
        unordered_map<int, long long> mp, tp;
        
        mp[0] = 1;
        
        if(arrLen > 1)
            mp[1] = 1;
        vec[0] = mp;
        
        for(int i = 1; i < steps; i++){
            
            mp.clear();
            
            tp = vec[i-1];
            
            for(auto it = tp.begin(); it != tp.end(); it++){
                
                int el = it->first;
                
                if(el + 1 < arrLen)
                    mp[el+1] = (mp[el+1] + it->second) % MOD;
                
                if(el - 1 >= 0) 
                    mp[el-1] = (mp[el-1] + it->second) % MOD;
                
                mp[el] = (mp[el] + it->second) % MOD;
            }
            
            vec[i] = mp;
        }
        
        return (int)vec[steps - 1][0];
    }
};