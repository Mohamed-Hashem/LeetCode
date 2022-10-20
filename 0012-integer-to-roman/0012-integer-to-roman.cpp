class Solution {
public:
    string intToRoman(int num) {
        string str[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
    int val[13] = {1000, 900, 500, 400, 100,  90,  50,  40, 10,   9,   5,   4,  1};
        
    string ans;
        
    for (int i=0; i<13; i++) {
        
        for (int j=0; j<(num/val[i]); j++) {
            ans += str[i];
        }
        
        num %= val[i];
    }
        
    return ans;
    }
};