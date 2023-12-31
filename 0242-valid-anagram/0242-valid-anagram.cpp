class Solution {
public:
    bool isAnagram(string s, string t) {
 if (s.size() != t.size())
     return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int i =0;
        
        for(char ch : s)
        {
            if (ch != t[i])
                return false;
            
            i++;
        }
        
        
        return true;
    }
};