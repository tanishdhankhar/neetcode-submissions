class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int area=INT_MIN;
        while(i<j){
            if(heights[i]<heights[j]){
                int sum=heights[i]*(j-i);
                area=max(sum,area);
                i++;
            }
            else {
                int sum=heights[j]*(j-i);
                area=max(sum,area);
                j--;
            }
        }
        return area;
    }
};
