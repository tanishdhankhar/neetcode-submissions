class Solution {
public:
    int INF=2147483647;
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //vector<vector<int>> vis(n,vector<int>(m,INF));
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dis(n,vector<int>(m,INF));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    q.push({0,{i,j}});
        //            vis[i][j]=0;
                    dis[i][j]=0;
                }
                else if(grid[i][j]==-1){
         //           vis[i][j]=-1;
                    dis[i][j]=-1;
                }
            }
        }
        vector<int>delrow={1,0,-1,0};
        vector<int>delcol={0,1,0,-1};
        while(!q.empty()){
            int dist=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==INF && dis[nrow][ncol]>dist){
                    dis[nrow][ncol]=dist+1;
                    q.push({dis[nrow][ncol],{nrow,ncol}});
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
