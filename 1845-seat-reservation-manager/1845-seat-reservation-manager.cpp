class SeatManager {
    set<int> ss;
public:
    SeatManager(int n) {
    for(int i=1;i<=n;i++)
        {
           ss.insert(i);
        }
    }
    
    int reserve() {
auto temp = ss.begin();
        int it = *temp;
        
        ss.erase(temp);
        
        return it;
    }
    
    void unreserve(int seatNumber) {
        
       ss.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */