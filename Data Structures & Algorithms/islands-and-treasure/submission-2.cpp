class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dis(n,vector<int>(m,2147483647));
        queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==-1)
                {
                    dis[i][j]=-1; 
                }
                else if(grid[i][j]==0){
                    pq.push({0,{i,j}});
                    dis[i][j]=0;
                }
            }
        }
        vector<int> delrow={1,0,-1,0};
        vector<int> delcol={0,1,0,-1};
        while(!pq.empty()){
            int dist=pq.front().first;
            int row=pq.front().second.first;
            int col=pq.front().second.second;
            pq.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && dis[nrow][ncol]==2147483647){
                    dis[nrow][ncol]=dist+1;
                    pq.push({dist+1,{nrow,ncol}});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=dis[i][j];
            }
        }

    }
};
