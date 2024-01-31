class MyQueue {
    stack<int> stk1;
    stack<int> temp;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stk1.push(x);
    }
    
    int pop() {
        
        while(!stk1.empty()){

            temp.push(stk1.top());
            stk1.pop();
        }
        
        int num = temp.top();
        temp.pop();
        
        while(!temp.empty()){
            stk1.push(temp.top());
            temp.pop();
        }
        
        return num;
    }
    
    int peek() {
        
        while(!stk1.empty()){

            temp.push(stk1.top());
            stk1.pop();
        }
        
        int num = temp.top();
        
        while(!temp.empty()){
            stk1.push(temp.top());
            temp.pop();
        }
        
        return num;
    }
    
    bool empty() {
        
        return stk1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */