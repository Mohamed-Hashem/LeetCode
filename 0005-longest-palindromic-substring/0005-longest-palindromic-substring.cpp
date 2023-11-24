class Solution {
    
    string checkPalindrom(string s, int l, int r){
        
        while(l >= 0 && r < s.size()) {
            
            if (s[l] != s[r])
                break;
            
            l--;
            r++;
        }
        
        string temp = "";
        
        for(int i = l + 1;i<r;i++){
            temp += s[i];
        }
        
        return temp;
    }
    
public:
    string longestPalindrome(string s) {
        
        string temp , maxPalindrome="";
        for(int i = 0;i<s.size();i++){
            
            temp = checkPalindrom(s,i,i);
            
            if (temp.size() > maxPalindrome.size()){
                maxPalindrome = temp;
            }
            
            temp = checkPalindrom(s,i,i+1);
            
            if (temp.size() > maxPalindrome.size()){
                maxPalindrome = temp;
            }
        }
        
        return maxPalindrome;
    }
};