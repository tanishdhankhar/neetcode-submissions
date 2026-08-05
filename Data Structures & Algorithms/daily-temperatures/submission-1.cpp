class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>> st;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans[i]=0;
            }
            else{
                bool flag=false;
                while(!st.empty()){
                    int top=st.top().first;
                    if(top>temperatures[i]){
                        ans[i]=st.top().second-i;
                        flag=true;
                        break;
                    }
                    else st.pop();
                }
                if(flag==false) ans[i]=0;
            }
            st.push({temperatures[i],i});
        }
        return ans;
    }
};
