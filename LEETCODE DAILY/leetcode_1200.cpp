class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      vector<int>b=arr;
      int n =arr.size();
      sort(b.begin(),b.end());
      int diff=INT_MAX;
      for(int i=0;i<n-1;i++){
       // int rem=a[i]-a[i-1];
       diff=min(diff,abs(b[i]-b[i+1]));


      }
       vector<vector<int>> ans;
        for (int i = 0; i < n - 1; i++) {
            if (b[i + 1] - b[i] == diff) {
                ans.push_back({b[i], b[i + 1]});
            }
        }
        return ans;
   


    }
};