class Solution {
public:
    string countAndSay(int n) {

        if(n==1)
            return "1";
        if(n==2)
            return "11";
        

        string str = "11";
        

        for(int i=3; i<=n ; i++)
        {
            string temp = "";
            str = str+"&"; // add a delimeter at the end
            int cnt = 1; // counter 
            
            for(int j = 1; j<str.length(); j++)
            {
                if(str[j]!=str[j-1])
                {
                    temp = temp + to_string(cnt); // add the counter to temp
                    temp = temp + str[j-1]; // add the data of the counter
                    cnt = 1; // reset the counter to 1
                }
                else
                    cnt++; // just count the freq of that number
            }
            
            // after one complete traversal, make str equal to temp;
            str = temp;
        }
        
    return str;
    }
};