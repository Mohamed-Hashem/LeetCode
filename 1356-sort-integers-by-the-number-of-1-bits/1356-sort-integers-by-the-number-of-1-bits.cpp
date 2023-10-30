class Solution {
        
   static bool comparator(int a,int  b){
        
        int p = num_one_bit(a);
        int q = num_one_bit(b);
        
        if( p == q ){  
            return a <= b;      
        }
        else return p < q;     
    }
    
   static int num_one_bit (int n){
          
            int count=0;
            
            while(n){
                
                count += n&1;
                
                n >>= 1;
                    
            } 
          
            return count;
        } 
    
public:

    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(),comparator);
        
        return arr;
        }  
};