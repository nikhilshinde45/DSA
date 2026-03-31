class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end(),[&](auto &a,auto &b){
            return a[0] < b[0];
        });

        int mini = points[0][1];
        int cnt = 1;
        for(int i = 1 ; i < points.size() ; i++){
             if(points[i][0]<=mini){
                 mini = min(mini,points[i][1]);
             }else{
                cnt++;
                mini = points[i][1];
             }
        }

        return cnt ;
        
    }
}; 