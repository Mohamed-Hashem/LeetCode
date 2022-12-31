class Solution {
public:
    string addBinary(string a, string b) {
        
         int carry = 0;
        int p = a.size() - 1, q = b.size() - 1;
        string out = "";
        
        while (p >= 0|| q >= 0 ) {
            int sum = 0;
            
            if (p >= 0) 
                sum += a[p--]-'0';
            
            if (q >= 0)
                sum += b[q--]-'0';
            
            sum += carry;
            carry = sum / 2;
            sum = sum % 2;
            
            out = to_string(sum) + out ;
        }
        
        if (carry)
            out = to_string(carry) + out;
        
        return out;
    }
};