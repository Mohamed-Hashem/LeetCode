class Solution {
public:
    double myPow(double x, int n) {
        double power = 1.00;
        int helper = abs(n);
        
        if (helper == 0)
            return power;
        else {
            
            while (helper && helper >= 0){
                
                if (helper % 2 == 1 ){
                     power = power * x;
                    helper--;
                }
                
                x *= x;
                helper /= 2;
            }
        }

        
        return (n > 0) ? power : 1/power;
    }
};