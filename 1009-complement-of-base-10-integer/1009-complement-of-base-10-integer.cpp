class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;

        string res  = "" ;
        while( n > 0){
            res += (( (n & 1)+'0') == '0') ?  '1' : '0';
            n /= 2;
        }

        reverse(res.begin(),res.end());
        int k = res.length();

        int num = 0;
        for(int i = 0 ; i < k ; i++){
            num = num *  2 + (res[i] - '0');
        }

        return num ;
        
    }
};