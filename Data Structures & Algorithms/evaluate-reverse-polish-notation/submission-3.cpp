class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> num;
        stack<char> exp;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int x=num.top();
                num.pop();
                int y=num.top();
                num.pop();
                if(tokens[i]=="+"){
                    num.push(x+y);
                }
                if(tokens[i]=="-"){
                    num.push(y-x);
                }
                if(tokens[i]=="*"){
                    num.push(x*y);
                }
                if(tokens[i]=="/"){
                    num.push(y/x);
                }
            }
            else num.push(stoi(tokens[i]));
        }
       return num.top();
        
    }
};
