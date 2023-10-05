class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        vector<int> v;
        int n = nums.size();
        
        for(int i : nums)
            mp[i]++;
        
        for(auto it : mp){
                        
            if (mp[it.first] > n / 3)
                v.push_back(it.first);
        }
        return v;
    }
};