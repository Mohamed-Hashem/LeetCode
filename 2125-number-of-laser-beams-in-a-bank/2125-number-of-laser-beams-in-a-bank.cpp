class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0, ans = 0;
        
        for (string s : bank) {
            
            int counter = 0;
            
            for (char c : s) {
                if (c == '1') {
                    counter++;
                }
            }
            if (counter != 0) {
                ans += (prev * counter);
                prev = counter;
            }
        }
        
        return ans;
    }
};