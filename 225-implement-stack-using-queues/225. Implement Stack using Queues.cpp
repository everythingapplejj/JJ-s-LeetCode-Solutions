class MyStack {
public:
        std::queue<int>main; 
        std::queue<int>placeholder; 
    MyStack() {
    }
    
    void push(int x) {
        this -> main.push(x); 
    }
    
    int pop() {
        while(main.size() > 1) {
            int extract = main.front();
            main.pop();
            placeholder.push(extract);
        }
        int returning = main.front();
        main.pop(); 
        while(!placeholder.empty()) {
            int extract = placeholder.front();
            placeholder.pop();
            main.push(extract); 
        }
        return returning; 
    }
    
    int top() {
        return main.back();
    }
    
    bool empty() {
        if(main.empty()) {
            return true; 
        }
        return false; 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */