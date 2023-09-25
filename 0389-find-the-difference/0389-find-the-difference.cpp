class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        
        for(char ch : s)
            mp[ch]++;
        
        for(char ch : t){
            
            if (mp[ch])
                mp[ch]--;
            else 
                return ch;
        }
        
        return 'a';
    }
};