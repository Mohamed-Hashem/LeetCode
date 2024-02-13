class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            set<char> ss;
            
            int maximum = INT_MIN;

            if (s.length() == 0)
                return 0;

            for (int i = 0; i < s.size(); i++)
            {
                for (int j = i; j < s.size(); j++)
                {
                    if (ss.find(s[j]) != ss.end())
                        break;

                    ss.insert(s[j]);
                }

                maximum = max(maximum, (int) ss.size());
                ss.clear();
            }
            
            return maximum;
        }
};