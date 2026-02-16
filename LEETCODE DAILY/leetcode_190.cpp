class Solution {
public:
    int reverseBits(int n) {

     unsigned int x = (unsigned int)n;


        string res = "";

        for(int i = 0 ; i < 32 ; i++){
            res.push_back((x&1) + '0');
            x = x >> 1;
        }
      
        // reverse(res.begin() , res.end());

       
       int sum = 0;
        for(char c : res){
            sum = sum * 2 + (c - '0');
        }

        return sum;
        
    }
};