class Solution {
public:
bool ismagic(vector<vector<int>>&grid,int i,int j,int n,int m){
    set<int>st;
    vector<int>row(3,0);
    vector<int>col(3,0);
    for(int k=i;k<i+3;k++){
         for(int l=j;l<j+3;l++){
            if(grid[k][l]<1||grid[k][l]>9||st.find(grid[k][l])!=st.end()){
                return false;
            }
            st.insert(grid[k][l]);
            row[k-i]+=grid[k][l];
            col[l-j]+=grid[k][l];
             
         }
    }
    int s=row[0];
    for(int i=0;i<3;i++){
         if(s!=row[i]||s!=col[i]){
            return false;
         }
    }
    int ds=0;
    for(int k=0;k<3;k++){
         ds+=grid[i+k][j+k];
    }
    if(s!=ds) return false;
    int ds2=0;
    for(int k=0;k<3;k++){
         ds2+=grid[i+2-k][j+k];
    }
    if(ds2!=s) return false;

    return true;

}
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n-2;i++){
             for(int j=0;j<m-2;j++){
                 if(ismagic(grid,i,j,n,m)){
                     cnt++;
                 }
             }
        }
        return cnt;
        
    }
};