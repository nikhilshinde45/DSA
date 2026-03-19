class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<int>histogram(m,0);

        int  cnt = 0,curr;
        for(int i = 0 ; i < n; i++){
                       

            //calculat histogram 

            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 1) histogram[j]+=1;
                else histogram[j] = 0;
            }

            stack<vector<int>>st;
            //{height,index,prevcnt}
            st.push({-1,-1,0});
            for(int k = 0 ; k < m ; k++){
                while(st.top()[0]>=histogram[k]) st.pop();
                curr = histogram[k] * (k-st.top()[1]) + st.top()[2];
                st.push({histogram[k] , k , curr});
                cnt += curr;
            }



        }

        return cnt ;

        // int cnt = 0;


        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < m ; j++){

        //         for(int x = i ; x < n ; x++){
        //             for(int y = j;y < m; y++){

        //                 int f = 0 ;
        //                 for(int a = i; a <= x ; a++){
        //                     for(int b = j; b <= y; b++){
        //                         if(mat[a][b] == 0){
        //                             f=1;
        //                             break;

        //                         }
                                
        //                     }
        //                     if(f==1) break;
                        
        //             }

        //             if(f==0) cnt++;
        //         }
        //     }
        // }

        // }

       

        // return cnt ;


        
    }
};