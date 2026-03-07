class Solution {
public:
int getminflipsofshift(string s){
     int n = s.length() ;
     int mini = INT_MAX;
        string res1 = "";
        string res2 = "";
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                res1 += '1';
                res2 += '0';
            }else{
                 res1 += '0';
                res2 += '1';

            }
        }
        s += s;

        int cnt1 = 0 , cnt2 = 0;
        int z = 2*n;
        

        for(int i = 0 ;i<z;i++){
            if(s[i]!=res1[i]) cnt1++;
            if(s[i]!=res2[i]) cnt2++;

            if(i>=n){
                if(s[i-n]!=res1[i-n]) cnt1--;
                if(s[i-n]!=res2[i-n]) cnt2--;
            }
            if(i>=n-1){
                mini=min(mini,min(cnt1,cnt2));

            }


        }

        return mini;

}
    int minFlips(string s) {

        //int n = s.length() ;

        //return getminflipsofshift(s);
        // string res = "";
        // int mini = INT_MAX;
        // for(int i = 0 ;i < n ;i++){

        //     int getcnt = getminflipsofshift(s);
        //     mini = min(mini , getcnt);
        //     rotate(s.begin(),s.begin()+1,s.end());

        // }


        return getminflipsofshift(s);
       



        
       


      
        
    }
};