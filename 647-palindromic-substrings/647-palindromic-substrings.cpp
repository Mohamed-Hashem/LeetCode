class Solution {      
private:
    int mTotal = 0;
    
    void countPalindromes(int l, int r, const string& s) {
        
        while (l >= 0 && r < s.size() && s[l] == s[r])
            isValidPalindrome(l, r);
    }
    
    void isValidPalindrome(int& l, int& r) {
        mTotal++;
        l--; r++;
    }
    
public:
    int countSubstrings(string s) {
        
        mTotal = s.size();  
        
        if (mTotal == 0)
            return mTotal;

        for (int i = 0; i < s.length(); i++) {
            countPalindromes(i-1, i+1, s);  // find palindromes of odd string length
            countPalindromes(i, i+1, s);  // find palindromes of even string length
        }
        
        return mTotal;
    }
};