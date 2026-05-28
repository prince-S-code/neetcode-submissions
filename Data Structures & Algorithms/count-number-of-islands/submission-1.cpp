class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<int> dr={0,0,-1,1};
        vector<int> dc={-1,1,0,0};
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j]='0';
                    while(!q.empty()){
                        auto current=q.front();
                        q.pop();
                        int row=current.first; 
                        int col=current.second;
                        for(int i=0;i<4;i++){
                            int nr=row+dr[i];
                            int nc=col+dc[i];
                            if(nr>=0 && nc>=0 && nr<m && nc<n && grid[nr][nc]=='1'){
                                grid[nr][nc]='0';
                                q.push({nr,nc});
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
