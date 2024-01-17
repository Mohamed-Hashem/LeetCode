class Solution
{
    public:
        bool uniqueOccurrences(vector<int> &arr)
        {
            map<int, int> mp;
            set<int> s;

            for (int i: arr)
            {
                mp[i]++;
            }

            for (auto m: mp)
            {
                s.insert(m.second);
            }

            return mp.size() == s.size();
        }
};