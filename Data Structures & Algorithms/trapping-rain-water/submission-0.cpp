class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int area=0;
        int lmax=height[l];
        int rmax=height[r];
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax=max(lmax,height[l]);
                int sum=lmax-height[l];
                area+=sum;
                
            }
            else{
                r--;
                rmax=max(rmax,height[r]);
                int sum=rmax-height[r];
                area+=sum;
                
            }
        }
        return area;
    }
};
