class Solution {
public:
 static bool check(vector<int>a,vector<int>b){
       if(a[1]==b[1]){
         return a[0]>b[0];
       }
       return a[1]<b[1];
  }
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int cnt=2;
        int n=intervals.size();

        sort(intervals.begin(),intervals.end(),check);
        vector<int>maxi(2,0);
        maxi[0]=intervals[0][1]-1;
        maxi[1]=intervals[0][1];
        for(int i=0;i<n;i++){
             if(maxi[1]<intervals[i][0]){
                 cnt+=2;
                 maxi[0]=intervals[i][1]-1;
                 maxi[1]=intervals[i][1];

             }else if(maxi[0]<intervals[i][0]){
                 cnt+=1;
                 maxi[0]=maxi[1];
                 maxi[1]=intervals[i][1];
             }
        }
        return cnt;
        
        
    }
};