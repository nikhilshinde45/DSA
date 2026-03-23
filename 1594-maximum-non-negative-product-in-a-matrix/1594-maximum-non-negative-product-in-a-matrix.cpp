
class Solution {
public:
#define  ll long long
const ll mod = 1e9+7;

pair<ll , ll> helper(int i, int j , vector<vector<int>>&grid,int n , int m,vector<vector<pair<ll,ll>>>&dp){
    if(i==n-1 && j==m-1){
        return {grid[i][j],grid[i][j]};
    }
    if(dp[i][j].first!=LLONG_MIN) return dp[i][j];

    //down
    ll maxval = LLONG_MIN;
    ll minval = LLONG_MAX;
    if(i+1<n){
        auto [downmax,downmin] = helper(i+1,j,grid,n,m,dp);
        maxval = max({maxval,grid[i][j]*downmax,grid[i][j]*downmin}); 
        minval = min({minval,grid[i][j]*downmax,grid[i][j]*downmin});
    }

    //right
    if(j+1<m){
        auto [rightmax,rightmin] = helper(i,j+1,grid,n,m,dp);
        maxval = max({maxval,grid[i][j]*rightmax,grid[i][j]*rightmin});
        minval = min({minval,grid[i][j]*rightmax,grid[i][j]*rightmin});
    }

    return dp[i][j] = {maxval,minval};
}


    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<pair<ll,ll>>>dp(n,vector<pair<ll,ll>>(m,{LLONG_MIN,LLONG_MAX}));

      auto[maxval,minval] =  helper(0,0,grid, n, m,dp);

      return (maxval < 0)?-1:maxval%mod;

        
        
    }
};