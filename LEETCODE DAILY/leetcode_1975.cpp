class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int cnt=0;
        long long  s=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                s+=abs(matrix[i][j]);
                if(matrix[i][j]<0) cnt++;
                mini=min(mini,abs(matrix[i][j]));

            }
        }
        if(cnt%2) return s-2*mini;
        return s;
        
    }
};