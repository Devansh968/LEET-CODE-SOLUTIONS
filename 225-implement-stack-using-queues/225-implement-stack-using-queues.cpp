class MyStack 
{
public:

	queue<int>q1,q2;
	MyStack() 
	{

	}
	void push(int x) 
	{
		 q1.push(x);
		 while(!q2.empty())
		 {
			 q1.push(q2.front());
			 q2.pop();
		 } 
		q2=q1;
		while(!q1.empty()) q1.pop();
	}

	int pop()
	{
		int t=q2.front();
		q2.pop();
		return t;
	}

	int top()
	{
		return q2.front();
	}

	bool empty() 
	{
		return q2.empty();
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