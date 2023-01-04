class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans=0;
        unordered_map<int,int>freq;
        
        for(int i=0;i<tasks.size();i++)
            freq[tasks[i]]++;
                
        for(auto it:freq){
            int k=it.second;
            
            if(k==1)
                return -1;
            
            if(k%3==0)
                ans+=k/3;
            else 
                ans+=(k/3)+1;
        }
        
     return ans;
    }
};