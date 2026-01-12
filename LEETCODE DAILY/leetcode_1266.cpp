class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int m=points[0].size();
        int t=0;
         for(int i=0;i<n-1;i++){
             t+=max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
         }
         return t;
        
    }
};