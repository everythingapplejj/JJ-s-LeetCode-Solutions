#include <list>
class MyQueue {
public:
    list<int> ret; 
    int cs; 
    MyQueue() {
       cs = 0; 
    }
    
    void push(int x) {
        ret.push_back(x);
        cs++; 
    }
    
    int pop() {
        int sample = ret.front(); 
        ret.pop_front();
        cs--; 
        return sample; 
    }
    
    int peek() {
        return ret.front();
    }
    
    bool empty() {
        return (cs == 0); 
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