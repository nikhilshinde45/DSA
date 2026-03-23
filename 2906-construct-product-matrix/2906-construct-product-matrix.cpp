class Solution {
public:
const int mod = 12345;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

      int len = n * m;
      vector<int>arr(len);
      for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m;j++){
            arr[i*m+j] = grid[i][j];
        }
      }
      vector<long long>pf(len,1),suff(len,1);
      for(int i = 1; i < len ; i++){
        pf[i] = (pf[i-1] * arr[i-1])%mod;
      }
      for(int i = len-2;i>=0;i--){
        suff[i] = (suff[i+1]*arr[i+1])%mod;
      }

      vector<vector<int>>ans(n,vector<int>(m));
      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++)
{        
        ans[i][j] = (pf[i*m+j]*suff[i*m+j])%mod;
}        
      }

      
        
        return ans;

        
    }
};