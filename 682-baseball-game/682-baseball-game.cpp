class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int sum=0;
				int value= st.top();
                sum+=st.top();
                st.pop();
                sum+=st.top();
                st.push(value);
                st.push(sum);
            }
            else if(ops[i]=="D")
            {
                int d=st.top()*2;
                st.push(d);
            }
            else if(ops[i]=="C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(ops[i]));    // stoi use for change value string to int
            }
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};