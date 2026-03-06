class Solution {
public:
    bool checkOnesSegment(string s) {
        int n =s.length();
        int i=0;
        int j=n-1;
        while(s[i]!='1') i++;
        while(s[j]!='1') j--;

        for(int k= i;k<j;k++){
            if(s[k] == '0') return false;
        }

        return true ;
       
        
    }
};