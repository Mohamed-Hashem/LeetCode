class Solution {
        void func(int idx,vector<int>&nums,vector<int>&a,set<vector<int>>&ans){
        int n=nums.size();
            
        if(idx>=n){
            if(a.size()>=2){
                ans.insert(a);
            }
            return ;
        }
        if(!a.size()||nums[idx]>=a.back()){
            a.push_back(nums[idx]);
            func(idx+1,nums,a,ans);
            a.pop_back();
        }
        func(idx+1,nums,a,ans); 
    }
public:

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>ans;
        func(0,nums,temp,ans);
        return vector(ans.begin(),ans.end());
    }
};