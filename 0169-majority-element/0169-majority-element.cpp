class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mp;
        
        for(int i : nums){
            mp[i]++;

                if (mp[i] > nums.size()/2)
                    return i;
        }
        
        return 0;
    }
};