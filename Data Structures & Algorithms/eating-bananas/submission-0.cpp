class Solution {
public:
    int hours(int mid,vector<int>& piles){
        int hour=0;
        for(int i=0;i<piles.size();i++){
            //hour+=ciel((int)piles/mid);
            hour+=(piles[i]+mid-1)/mid;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lower =1;
        int higher = *max_element(piles.begin(),piles.end());
        while(lower<=higher){
            int mid =lower+(higher-lower)/2;
            if(hours(mid,piles)>h){
                lower=mid+1;
            }
            else higher=mid-1;
        }
        return lower;
    }
};
