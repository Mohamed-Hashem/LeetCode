class Solution
{
    public:
    int removeDuplicates(vector<int> &nums)
    {

        int j = 1;

        int flag = 1;

        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] == nums[i - 1])
            {
                if (flag == 1)
                {
                    nums[j] = nums[i];
                    j++;
                    flag++;
                }
                else if (flag == 2)
                    continue;
            }
            else
            {
                nums[j] = nums[i];
                j++;
                flag = 1;
            }
        }
        return j;
    }
};