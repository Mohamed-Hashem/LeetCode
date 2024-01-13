class Solution
{
    public:
        int minSteps(string s, string t)
        {

            int freq[26] = { false
            };

            for (int i = 0; i < s.size(); i++)
            {

                freq[t[i] - 'a']++;
                freq[s[i] - 'a']--;
            }

            int counter = 0;

            for (int it: freq)
            {
                counter += max(it, 0);
            }

            return counter;
        }
};