class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string temp1, temp2;
        for(string str :word1 )
            temp1 += str;
        
            for(string str :word2 )
            temp2 += str;
        
        return temp1 == temp2; 
    }
};