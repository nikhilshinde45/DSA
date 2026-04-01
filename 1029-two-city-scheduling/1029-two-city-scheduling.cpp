class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {

     sort(costs.begin(),costs.end(),[&](auto &a,auto &b){
       return  a[1]-a[0] > b[1] - b[0];

     });

     int ans =  0;
     for(int i = 0 ; i < costs.size() ; i++){
        ans += (i>=costs.size()/2)?costs[i][1]:costs[i][0];
     }

     return ans;
        
    }
};