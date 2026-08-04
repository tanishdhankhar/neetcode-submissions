class MinStack {
public:
    stack<int> st;
    MinStack() {
        
        //return st;
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        int tele=st.top();
        return tele;
    }
    
    int getMin() {
        stack<int>dup;
        int mini=INT_MAX;
        while(!st.empty()){
            int top=st.top();
            st.pop();
            dup.push(top);
            mini=min(top,mini);
        }
        while(!dup.empty()){
            int top=dup.top();
            dup.pop();
            st.push(top);
            //mini=min(top,mini)
        }
        return mini;
    }
};
