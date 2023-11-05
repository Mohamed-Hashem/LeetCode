class Solution {
    int findFirst(vector<int> nums, int target){
        
        int left = 0,right = nums.size() -1, mid, position = -1;
            
            while (left <= right) {
                mid = left + (right - left) / 2;
                
                if (target > nums[mid])
                    left = mid + 1;
                else if (target < nums[mid])
                    right = mid - 1;
                else {                   
                   position = mid;
                    right = mid-1;
                }
            }
        
        return position;
    }
    
    int findLast(vector<int> nums, int target){
        
        int left = 0,right = nums.size() -1, mid, position = -1;

        while (left <= right) {
            mid = left + (right - left) / 2;

            if (target > nums[mid])
                left = mid + 1;
            else if (target < nums[mid])
                right = mid - 1;
            else {                   
               position = mid;
                left = mid+1;
            }
        }

        return position;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
            return {findFirst(nums,target),findLast(nums,target)};   
    }
};