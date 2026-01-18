class Solution {
public:
bool helper(vector<vector<int>>& grid,int i,int j,int k){
    int t=0;
    for(int c=j;c<j+k;c++){
        t+=grid[i][c];
    }
    for(int r=i;r<i+k;r++){
        int su=0;
        for(int c=j;c<j+k;c++){
            su+=grid[r][c];
        }
        if(su!=t) return false;
    }

    for(int c=j;c<j+k;c++){
        int su2=0;
        for(int r=i;r<i+k;r++){
            su2+=grid[r][c];
        }
        if(su2!=t) return false;
    }

    int su3=0;
    for(int x=0;x<k;x++){
        su3+=grid[i+x][j+x];
    }
    if(su3!=t) return false;
    int su4=0;
    for(int y=0;y<k;y++){
        su4+=grid[y+i][j+k-1-y];
    }
    if(su4!=t) return false;

    return true ;


}
    int largestMagicSquare(vector<vector<int>>& grid) {
         int n=grid.size();
         int m=grid[0].size();
         int maxi=1;
         for(int k=2;k<=min(n,m);k++){
            for(int i=0;i<=n-k;i++){
                for(int j=0;j<=m-k;j++){
                    if(helper(grid,i,j,k)){
                        maxi=max(k,maxi);
                    }
                }
            }
         }
         return maxi;
        
    }
};