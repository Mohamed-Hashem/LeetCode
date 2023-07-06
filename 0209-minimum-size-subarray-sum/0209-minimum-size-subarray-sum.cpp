class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimum = INT_MAX, sum =0;
        int i =0, j = 0;

        while(j < nums.size()){
            
            sum += nums[j++];
            
            while (sum >= target){
                minimum = min(j - i, minimum);
                sum -= nums[i];
                i++;
            }           
        } 
        
        return minimum == INT_MAX ? 0 : minimum ;
    }
};