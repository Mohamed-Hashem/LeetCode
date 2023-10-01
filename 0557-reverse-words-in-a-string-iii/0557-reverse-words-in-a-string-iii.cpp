class Solution {
public:
    string reverseWords(string s) {
       int i =0;
        string temp, str;
        while(i < s.size()){
          
            if (s[i] == ' '){
             reverse(temp.begin(),temp.end());
                str = str + temp + ' ';
                temp= "";
                i++;
            }

            temp += s[i];          
                        
            if (i == s.size() - 1){
                 reverse(temp.begin(),temp.end());
                 str = str + temp;
            }
            
            i++;
        }
        
        return str;
    }
};