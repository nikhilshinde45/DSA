class Solution {
public:
int countBinarySubstrings(string s) {

     int n = s.length() ;
     int cur = 1;
     int prev= 0;
     int  cnt = 0;
     for(int i = 1 ; i < n ; i++){
        if(s[i] == s[i-1]){
            cur++;
        }else{
            cnt += min(cur , prev);
            prev = cur ;
            cur = 1;

        }
     }
    return cnt + min(cur , prev);

       
        
    }
};