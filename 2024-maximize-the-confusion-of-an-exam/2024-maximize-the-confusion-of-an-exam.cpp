class Solution {
    int maxConsecutiveAnswersHelper(string answerKey, int k, char target){
     int ans = -1,counter=0;
        
        for(int i =0,j=0; j <answerKey.size();j++ ){
            
            if (answerKey[j] == target)
                counter++;
            
            while (i < j && counter > k){
                
                if (answerKey[i] == target)
                    counter--;
                
                i++;
            }
            
            ans = max(ans,j - i +1);
        }
        
        return ans;
    }
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        return max(maxConsecutiveAnswersHelper(answerKey,k,'T'), maxConsecutiveAnswersHelper(answerKey,k,'F'));
    }
};