class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        multiset <double> mp;
        
        for(int i =0;i <dist.size();i++){
            mp.insert((dist[i] * 1.0) / speed[i]);
        }
        
        int killers = 0 ;
        
        int i =0;
        
        for(auto it: mp){
            
            if (i >= it )
                break;
            else 
                killers++;
            
            i++;
        }
        
        return killers;
    }
};