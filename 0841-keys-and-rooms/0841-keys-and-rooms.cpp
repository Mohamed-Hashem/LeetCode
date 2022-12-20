class Solution {
public:
   bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        deque<int> Q({0});
       
        unordered_set<int> seen;
       
        while (!Q.empty())
        {
            int r = Q.front(); Q.pop_front();
            seen.insert(r);
            
            for (int k : rooms[r])
                if (!seen.count(k))
                    Q.push_back(k);
        }
        
        return seen.size() == rooms.size();
    }
};