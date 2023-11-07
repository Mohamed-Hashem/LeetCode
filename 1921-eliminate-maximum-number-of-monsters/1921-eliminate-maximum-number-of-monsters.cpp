class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        vector<int> time(dist.size());
        
        for(int i=0;i<dist.size();i++){
            time [i] = ceil((dist[i] * 1.0) / speed[i]);
        }
        
        sort(time.begin(),time.end());
        
        int startTime = 0;
        
        for(int i = 0 ; i < time.size();i++){
            
            if (startTime >= time[i])
                break;
            else 
                startTime++;
        }
        
        return startTime;
    }
};