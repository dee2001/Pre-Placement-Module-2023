class MyQueue {
public:
    stack<int> push_;
    stack<int> pop_;
    MyQueue() {
        
    }
    
    void push(int x) {
        push_.push(x);
    }
    
    int pop() {
        while(push_.size()>1){
            pop_.push(push_.top());
            push_.pop();
        }
        int x = push_.top();
        push_.pop();
        while(!pop_.empty()){
            push_.push(pop_.top());
            pop_.pop();
        }
        return x;
    }
    
    int peek() {
        while(push_.size()>1){
            pop_.push(push_.top());
            push_.pop();
        }
        int x = push_.top();
        while(!pop_.empty()){
            push_.push(pop_.top());
            pop_.pop();
        }
        return x;
    }
    
    bool empty() {
        return push_.empty();
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
