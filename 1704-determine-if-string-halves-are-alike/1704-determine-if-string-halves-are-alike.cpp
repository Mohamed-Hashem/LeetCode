class Solution
{
    public:
        bool halvesAreAlike(string s)
        {

            set<char> vowel = { 'a',
                'e',
                'i',
                'o',
                'u',
                'A',
                'E',
                'I',
                'O',
                'U' };

            int sum = 0;

            for (int i = 0; i < s.size() / 2; i++)
            {
                sum += vowel.count(s[i]) - vowel.count(s[s.size() - 1 - i]);
            }

            return sum == 0;
        }
};