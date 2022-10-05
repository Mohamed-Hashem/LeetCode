class Solution {
    int work(string s){
        
        int res = 0;
        
        for(int i = 0, start = 0, cnt = 0; i < s.size(); i++){
            if(s[i] == '(') 
                cnt++;
            else{
                cnt --;
                
                if(cnt < 0) 
                    start = i+1, cnt = 0;
                else if(!cnt)
                    res = max(res, i-start+1);
            }
        }
        
        return res;
    }
public:
      int longestValidParentheses(string s) {
        int res = work(s);  
        reverse(s.begin(), s.end()); 
          
        for(auto& c: s) 
            c ^= 1;
          
        return max(res, work(s));
    }
    

};