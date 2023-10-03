class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int counter = 0 ;
        
        for(int i =0;i < nums.size();i++){
            
            counter += mp[nums[i]];
            
            mp[nums[i]]++;        
        }
        
        return counter;
    }
};