class Solution {

 string GetPalindromeHelper(string str, int start, int end) {

	while (start >= 0 && end < str.size()) {

		if (str[start] != str[end])
			break;

		start--;
		end++;
	}

	string temp = "";

	for (int i = start + 1; i < end; i++)
		temp += str[i];

	return temp;
}

public:

string longestPalindrome(string s) {

		string temp = "", palindrome = "";

		for (int i = 0; i < s.size(); i++) {

			temp = GetPalindromeHelper(s, i, i);
            
			if (temp.size() > palindrome.size())
				palindrome = temp;

			temp = GetPalindromeHelper(s, i, i + 1);
            
			if (temp.size() > palindrome.size())
				palindrome = temp;
		}

		return palindrome;
    }
};