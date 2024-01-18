class Solution {
public:
    int majorityElement(vector<int>& nums) {
             
        unordered_map<int,int> mmap;
        
        for(int i = 0; i< nums.size();i++){
            
            mmap[nums[i]]++;
            
            if (mmap[nums[i]] > nums.size()/2) {      
                    return nums[i];
            }
        }
        
        return 1;
    }
};