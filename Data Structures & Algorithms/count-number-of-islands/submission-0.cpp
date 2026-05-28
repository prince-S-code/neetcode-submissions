class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // using bfs
        int m=grid.size();
        int n=grid[0].size();
        vector<int> dr={-1,0,0,1};
        vector<int> dc={0,1,-1,0};
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                queue<pair<int,int>> q;
                if(grid[i][j]=='1'){
                    q.push({i,j});
                    count++;
                }
                while(!q.empty()){
                    auto curr=q.front();
                    q.pop();
                    int row=curr.first;
                    int col=curr.second;
                    for(int i=0;i<4;i++){
                        int nr=row+dr[i];
                        int nc=col+dc[i];
                        if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]=='1'){
                            q.push({nr,nc});
                            grid[nr][nc]='0';
                        }
                    }
                }
            }
        }
        return count;
    }
};
