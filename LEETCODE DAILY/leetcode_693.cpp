class Solution {
public:
    bool hasAlternatingBits(int n) {

        string res = "";
        while(n > 0){
            res += ((n  & 1) + '0');
            n /= 2;
          }
        int k = res.length();
        for(int i = 0 ; i < k - 1 ; i++){
                
                if(res[i] == res[i+1]) return false;
  
        }
        
        return true ;
    }
};