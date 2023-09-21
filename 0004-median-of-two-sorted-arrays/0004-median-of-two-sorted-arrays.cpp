class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> temp (nums1.size() + nums2.size());
        
        int i = 0, j = 0, k = 0;
        
        while(i < nums1.size() && j <  nums2.size()){
            
            if (nums1[i] < nums2[j])
                temp[k++]=nums1[i++];
            else 
                temp[k++]=nums2[j++];
        }
        
         while(i < nums1.size())
             temp[k++]=nums1[i++];
        
        while(j < nums2.size())
             temp[k++]=nums2[j++];
        
        if (temp.size() % 2 == 1)
            return double(temp[temp.size() / 2]);
        else {
            int num1 = temp[temp.size() / 2 - 1];
            int num2 = temp[temp.size() / 2];
            
            return double(num1 + num2) / 2.0;
        }
    }
};