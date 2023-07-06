class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimum = INT_MAX, sum =0;

        for(int i =0, j = 0; i<nums.size();i++){
            
            sum += nums[i];
            
            while (sum >= target){
                minimum = min(i+1 - j, minimum);
                 sum -= nums[j];
                j++;
            }           
        } 
        
        return minimum == INT_MAX ? 0 : minimum ;
    }
};