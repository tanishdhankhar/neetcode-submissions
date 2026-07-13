class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxi=1;
        if (nums.size()==0) return 0;
       // if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
               if(cnt>maxi) maxi=cnt;
                continue;  
            }
            else if(nums[i]==1+nums[i-1]){
                cnt++;
                if(cnt>maxi) maxi=cnt;
            }
            else {
                cnt=1;
            }
        }
        return maxi;
        
    }
};
