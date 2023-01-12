class Solution {
           static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
public:

    int findMinArrowShots(vector<vector<int>>& po) {
        
        if(po.size()==0)
            return 0;
        
        sort(po.begin(), po.end(), comp);
        
        int arrows = 1;
        int last = po[0][1];
        
        for(int i=1; i<po.size(); i++)
        {
            if(po[i][0]>last)
            {
                arrows++;
                last = po[i][1];
            }
        }
        return arrows;
    }
};