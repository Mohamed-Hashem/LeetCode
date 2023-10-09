class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   	if (nums.size() == 0)
		return { -1,-1 };

	if (nums.size() == 1 && nums[0] == target)
		return { 0,0 };

	int low = 0, high = nums.size() - 1;
	int mid = 0;

	while (low <= high) {

		mid = low + ((high - low) / 2);

		if (target < nums[mid])
			high = mid - 1;
		else if (target > nums[mid])
			low = mid + 1;
		else
			break;
	}

	if (low > high)
		return { -1,-1 };

	low = mid, high = mid;

	while (low >= 0 && nums[low] == target )
		low--;

	while ( high < nums.size() && nums[high] == target)
		high++;

	return { low + 1,high - 1 };
    }
};