class Solution {
public:
    int reverse(int x) {
        vector<int> arr;
        bool flag=false;
        if(x<0){
            flag=true;
            x=x*(-1);
        }
        while(x>=1){
            int i=x%10;
            arr.push_back(i);
            x=x/10;
        }
        int len= arr.size();
        int pow1=len-1;
        long long ans=0;
        for(int i =0;i<len;i++){
            ans+=arr[i]*pow(10,pow1);
            pow1--;
        }
        
        if (flag==true) ans= ans*(-1);
        if(ans<(pow(-2,31)) || ans>((pow(2,31)-1))) return 0;
        return ans;
    }
};
