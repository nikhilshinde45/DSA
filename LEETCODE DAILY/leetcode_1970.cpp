class Solution {
public:
bool check(int row,int col,int m,vector<vector<int>>&cells){
    vector<vector<int>>grid(row,vector<int>(col,0));
    for(int i=0;i<m;i++){
         grid[cells[i][0]-1][cells[i][1]-1]=1;
    }
    vector<vector<int>>visited(row,vector<int>(col,0));
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    queue<pair<int,int>>qu;
    for(int i=0;i<col;i++){
         if(grid[0][i]==0){
            qu.push({0,i});
         }
    }

    while(!qu.empty()){
         int r=qu.front().first;
         int c=qu.front().second;
         if(r==row-1) return true;
         qu.pop();
         for(int k=0;k<4;k++){
             int nr=r+dx[k];
             int nc=c+dy[k];
             if(nr>=0&&nr<row&&nc>=0&&nc<col&&!visited[nr][nc]&&grid[nr][nc]==0){
                visited[nr][nc]=1;
                qu.push({nr,nc});
             }
         }
    }
    return false;

}
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int l=0;
        int h=cells.size();
        int day=0;
        while(l<=h){
             int m=(l+h)/2;
             if(check(row,col,m,cells)){
                 day=max(m,day);
                 l=m+1;
             }else{
                h=m-1;
             }
        }
        return day;
        
    }
};