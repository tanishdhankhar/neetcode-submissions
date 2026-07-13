class Solution {
public:
        bool isst(char t){
            if((t>='A' && t<='Z') || (t>='a' && t<='z') || (t>='0' && t<='9')){
                return true;
            }
            return false;
        }
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            while(l<r && !isst(s[l])){
                l++;
            }
            while(l<r && !isst(s[r])){
                r--;
            }
            if(tolower(s[l]) !=tolower(s[r])){
                return false;
            } 
            l++;r--;
        }
        return true;
    }
};
