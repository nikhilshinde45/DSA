class Solution {
public:
bool isprime(int num){

    if(num <= 1) return false;
    if(num == 2 ) return true;
    int cnt = 0 ;
    for(int i = 1 ; i <= num ; i++){
        if(num % i == 0) cnt++;
    }

    return cnt == 2;

}
    int countPrimeSetBits(int left, int right) {

        int cnt = 0;
        for(int i = left ; i <= right ; i++){

            if(isprime(__builtin_popcount(i))){
                 cnt++;
            }
             
        }

        return cnt ;
        
    }
};