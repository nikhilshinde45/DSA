class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>vecA(n,vector<int>(m,0));
        vector<vector<int>>vecB(n,vector<int>(m,0));

        int cnt = 0;

        for(int i = 0 ;  i < n ; i++){
            for(int j = 0 ;  j < m ; j++){

                vecA[i][j] = (grid[i][j]=='X')?1:0;
                vecB[i][j] = (grid[i][j]=='Y')?1:0;

                int l1 = (i-1>=0)?vecA[i-1][j]:0;
                int r1 = (j-1>=0)?vecA[i][j-1]:0;
                int d1 = (i-1>=0&&j-1>=0)?vecA[i-1][j-1]:0;

                vecA[i][j] = vecA[i][j] + l1 + r1 -d1;

                 int l2 = (i-1>=0)?vecB[i-1][j]:0;
                int r2 = (j-1>=0)?vecB[i][j-1]:0;
                int d2 = (i-1>=0&&j-1>=0)?vecB[i-1][j-1]:0;

                vecB[i][j] = vecB[i][j] + l2 + r2 -d2;

                if(vecA[i][j] == vecB[i][j] && vecA[i][j] > 0) cnt++;


                
            }
        }


        // for(int i = 0 ;i < n; i++){
        //     for(int j = 0 ;j < m ;j++){
        //         cout<<vecA[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n";

            
        
        return cnt;
    }
};