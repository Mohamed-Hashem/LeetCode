class Solution
{
    public:
        int findSpecialInteger(vector<int> &arr)
        {
            map<int, int> mp;
            int size = arr.size() / 4;
            int elem = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                mp[arr[i]]++;

                if (mp[arr[i]] > size)
                    elem = arr[i];
            }

            return elem;
        }
};