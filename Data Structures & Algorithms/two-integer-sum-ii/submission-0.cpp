class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        vector<int>ans;
        while(i<j){
            int sum=0;
            sum=numbers[i]+numbers[j];
            if(numbers[i]!=numbers[j]){
                if(sum<target){
                    i++;
                }
                else if(sum>target){
                    j--;
                }
                else {
                    //cout<<i;
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }
            }
            else {
                i++;
                j--;
            }
        }
        return ans;
    }
};
