class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length();
        int cnt1=0;
        int cnt2=0;
        for(auto i:s){
            if(i=='b') cnt1++;
            else cnt2 = min(cnt2+1,cnt1);
        }

      
        return cnt2;
    }
};