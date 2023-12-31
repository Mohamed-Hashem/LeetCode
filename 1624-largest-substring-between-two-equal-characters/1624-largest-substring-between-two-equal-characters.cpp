class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        string str ;
        int maximum = -1;
        
        for(int i =0;i<s.size();i++){
            
            for(int j = i+1;j < s.size();j++){
                
                if (s[i] == s[j] && j - i > maximum)
                    maximum = j - i - 1;
            }
        }
        
        return maximum;
    }
};