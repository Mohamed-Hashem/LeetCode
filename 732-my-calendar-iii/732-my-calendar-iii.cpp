class MyCalendarThree {
    map<int,int>mapping;
    int maxi;

public:
    MyCalendarThree() {
        maxi = 0;
    }
    
    int book(int start, int end) {
        
        int count=0;
        mapping[start]++;
        mapping[end]--;
        
        for(auto it = mapping.begin();it!=mapping.end();it++){
             count+=it->second;
             maxi=max(maxi,count);
        }
        
           return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */