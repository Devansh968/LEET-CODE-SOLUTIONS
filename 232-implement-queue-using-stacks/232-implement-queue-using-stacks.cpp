class MyQueue {
public:
    /*
    Using two stacks
    1) push ->O(1)
    2)pop ->O(1) amortized cost
    3)top ->O(1)
    4)empty ->O(1)
    */
    stack<int>input;
    stack<int>output;
    MyQueue() {
        
        
    }
    
    void push(int x) 
    {
        input.push(x);
        
    }
    
    int pop() {
        if(!output.empty())
        {
            int item=output.top();
            output.pop();
            return item;

        }
        else
        {
            while(!input.empty())
            {
              output.push(input.top());
                input.pop();
         
            }
           int item=output.top();
            output.pop();
            return item;
        }
        
    }
    
    int peek() 
    {
        if(!output.empty())
            return output.top();
        else
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
        
    }
    
    bool empty() {
        if(output.empty()==false || input.empty()==false)
            return false;
        else
            return true;
    }
};
