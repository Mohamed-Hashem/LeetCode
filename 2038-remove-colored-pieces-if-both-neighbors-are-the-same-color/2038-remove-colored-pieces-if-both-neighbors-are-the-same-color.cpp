class Solution {
public:
    bool winnerOfGame(string arr) {
        
        int alice = 0;
        
        for(int i = 2; i < arr.size();i++){
            
            if (arr[i] == arr[i-1] && arr[i] == arr[i -2] && arr[i] == 'A')
                alice++;
            
            if (arr[i] == arr[i-1] && arr[i] == arr[i -2] && arr[i] == 'B')
                alice--;
        }
                     
            return alice > 0;
    }
};