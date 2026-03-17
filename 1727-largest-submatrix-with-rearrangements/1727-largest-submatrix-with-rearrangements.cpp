class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int area = -1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 1 && (i)>0){
                    matrix[i][j] += matrix[i-1][j];
                }
            }
            vector<int>r = matrix[i];
            sort(r.rbegin() , r.rend());

            for(int i = 0 ; i < m ; i++){
                area = max(area, (i+1) * r[i]);
            }
        }

        return area ;


        
    }
};