class Solution
{
    int counter = 0;

    void isValidPalindrom(string str, int left, int right)
    {

        while (left >= 0 && right < str.size())
        {
            if (str[left] != str[right])
                break;
            else
                counter++;

            left--;
            right++;
        }
    }

    public:
        int countSubstrings(string s)
        {
            counter = s.size();

            for (int i = 0; i < s.size(); i++)
            {

                isValidPalindrom(s, i, i + 1);	// find palindromes of Even string length

                isValidPalindrom(s, i - 1, i + 1);	// find palindromes of Odd string length
            }

            return counter;
        }
};