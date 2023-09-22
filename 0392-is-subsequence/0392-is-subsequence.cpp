class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c = 0;
        for(int i =0,j=0;i<t.size();i++){
            if (s[j] == t[i]){
               c++;
                j++;
            }
        }
        
        return c == s.size();
    }
};