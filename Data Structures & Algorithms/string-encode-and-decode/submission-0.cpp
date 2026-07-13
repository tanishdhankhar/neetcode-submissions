class Solution {
public:
    
    string encode(vector<string>& strs) {
        string s;
         for(int i=0;i<strs.size();i++){
            string x=to_string(strs[i].size());
            s+=x+"$"+strs[i];
        }
        return s;
    }
    vector<string> ans;
    //int index=stoi(s[0]);
    int index=0;
    vector<string> decode(string s) {
       while(index<s.size()){
        int i=index;
        
        while(i < s.size() && s[i] != 36){
            i++;
        }
        int x=stoi(s.substr(index,i-index));
        
        ans.push_back(s.substr(i+1,x));
        index=x+1+i;
       }
       return ans;
    }
};
