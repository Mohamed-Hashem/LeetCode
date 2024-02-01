class Solution
{
    public:
        int minOperations(vector<int> &nums)
        {
            map<int, int> mp;

            for (int i = 0; i < nums.size(); i++)
                mp[nums[i]]++;
            
            int counter = 0;
            
            for(auto it : mp){
                
                if (it.second == 1)
                    return -1;
                else 
                    counter += ceil(double (it.second) / 3);
                
            }
            
            return counter;
        }
};