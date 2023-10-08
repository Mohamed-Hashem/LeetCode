class Solution {
     int dp[505][505];  
    int nums1_size, nums2_size;  
    
    
    int calculateDotProduct(vector<int>& nums1, vector<int>& nums2, int idx1, int idx2) {
        if (idx1 == nums1_size || idx2 == nums2_size)
            return 0;

        if (~dp[idx1][idx2])
            return dp[idx1][idx2];

        int option1 = nums1[idx1] * nums2[idx2] + calculateDotProduct(nums1, nums2, idx1 + 1, idx2 + 1);
        int option2 = calculateDotProduct(nums1, nums2, idx1, idx2 + 1);
        int option3 = calculateDotProduct(nums1, nums2, idx1 + 1, idx2);

        return dp[idx1][idx2] = max({option1, option2, option3});  
    }
    
public:

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        nums1_size = nums1.size();
        nums2_size = nums2.size();

        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        for (int num : nums1) {
            firstMax = max(firstMax, num);
            firstMin = min(firstMin, num);
        }

        for (int num : nums2) {
            secondMax = max(secondMax, num);
            secondMin = min(secondMin, num);
        }

     
        if ((firstMax < 0 && secondMin > 0) || (firstMin > 0 && secondMax < 0)) {
            return max(firstMax * secondMin, firstMin * secondMax);
        }

        memset(dp, -1, sizeof(dp)); 
        
     
        return calculateDotProduct(nums1, nums2, 0, 0);
    }
};