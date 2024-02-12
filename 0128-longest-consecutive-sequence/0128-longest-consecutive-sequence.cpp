class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
            if (nums.size() == 0)
                return 0;
            
            sort(nums.begin(), nums.end());

            int maximum = 1;
            int counter = 1;

            for (int i = 0; i < nums.size() - 1; i++)
            {

                if (nums[i] + 1 == nums[i + 1])
                {
                    counter++;
                }
                else if (nums[i] == nums[i + 1])
                    continue;
                else
                {
                    maximum = max(maximum, counter);
                    counter = 1;
                }
            }

            maximum = max(maximum, counter);

            return maximum;
        }
};