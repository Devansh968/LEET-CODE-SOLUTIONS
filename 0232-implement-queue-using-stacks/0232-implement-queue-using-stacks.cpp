class MyQueue {
public:

    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
        
    }
    
    int pop() {
       if(!output.empty()) {
           int item = output.top();
           output.pop();
           return item;
       }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
                int  item =  output.top();
                output.pop();
                return item;
            }
        }
    
    
    int peek() {
        if(!output.empty()){
            return  output.top();
        }
        else{
            while(!input.empty()){
            output.push(input.top());
            input.pop();
            }
            return  output.top();
        }
    }
    
    bool empty() {
        if(input.empty()==false || output.empty() == false){
            return false;
        }
        return true;
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