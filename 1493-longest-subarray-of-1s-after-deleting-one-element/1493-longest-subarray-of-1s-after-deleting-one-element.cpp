class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int zeroCount = 0;
        int longestWindow = 0;
        int start = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            zeroCount += (nums[i] == 0);
                          
            while (zeroCount > 1) {
                zeroCount -= (nums[start] == 0);
                start++;
            }
              
            longestWindow = max(longestWindow, i - start);
        }

        return longestWindow;
    }
};