class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0 )
            return {-1,-1};
        else if (nums.size() == 1 && nums[0] == target)
		    return { 0,0 };
        else {
            
int left = 0,right = nums.size() -1, mid;
            
            while (left <= right) {
                mid = left + (right - left) / 2;
                
                if (target > nums[mid])
                    left = mid + 1;
                else if (target < nums[mid])
                    right = mid - 1;
                else {                   
                    break;
                }
            }
            
            if (left >  right )
                return {-1, -1};
            else {
 
                left = right = mid;
                
                while (left >= 0  && target == nums[left] )
                    left--;
            
                while (right < nums.size() && target == nums[right])
                    right++;

                return {left + 1, right - 1};    
            }
        }
    }
};