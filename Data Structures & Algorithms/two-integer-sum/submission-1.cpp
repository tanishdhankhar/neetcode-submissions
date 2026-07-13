class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int r=target-nums[i];
            if(mp.find(r)!=mp.end()){
                vector<int> arr(2);
                if(mp[r]!=i){
                arr[0]=i;
                arr[1]=mp[r];
                return arr;
                }
            }
        }
        return {0,0};
    }
};
