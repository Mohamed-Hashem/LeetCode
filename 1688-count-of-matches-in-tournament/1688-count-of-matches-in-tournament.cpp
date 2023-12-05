class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0,teams= n;
        
        while (teams > 1){
            
            if (teams % 2 == 1){
                
               matches += ((teams-1)/2);
              teams = ((teams - 1) / 2) + 1;

            }else {
                
               matches += (teams/2);
               teams = teams/2;
            }
        }
        
        return matches;
    }
};