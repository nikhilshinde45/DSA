class Solution {
public:
    int binaryGap(int n) {

        string res = "";
        while(n > 0){
            res += ((n & 1) +'0');
            n = n >> 1;
        }
        reverse(res.begin() , res.end());
       // cout<<res<<endl;
       int len = res.length();
        int maxi = 0;
        int cnt =-1;
        for(int i = 0 ; i < len ; i++ ){

            if(res[i] == '1'){
                if(cnt != -1){
                    maxi = max(maxi , i - cnt);
                }
                cnt = i;
            }

          
            
        }

        return maxi ;




        
    }
};