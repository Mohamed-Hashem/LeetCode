class Solution {
public:
    int climbStairs(int n) {
         int first = 1, second = 2, current;
        
        if( n < 3) 
            return n;
        
        for(int i = 3;i<=n;i++){
            
            current = first + second;
            
            first = second;
            second = current;
        }
        
        return current;
    }
};