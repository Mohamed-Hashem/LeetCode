class Solution {
public:
    bool buddyStrings(string s, string goal) {
     
     if(s.size()!=goal.size())
         return false;
        
        if(s==goal){
            
            vector<int> freq(26,0);
            
            for(auto& character:s){
                freq[character-'a']+=1;
                if(freq[character-'a']==2) return true;
            }
            
            return false;
        }
        
        int index1=-1;
        int index2=-1;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]!=goal[i]){
                
                if(index1==-1)
                    index1=i;
                else if(index2==-1) 
                    index2=i;
                else 
                    return false;
            }
        }
        
        if(index2==-1) 
            return false;
        
        return s[index1]==goal[index2] and s[index2]==goal[index1];

    }
};