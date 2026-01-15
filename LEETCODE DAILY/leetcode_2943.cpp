class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int len1=hBars.size();
        int len2=vBars.size();
        int cnt=1;
        int maxcnt=1;
        int cnt2=1;
        int maxcnt2=1;
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        for(int i=0;i<len1-1;i++){
            if(abs(hBars[i+1]-hBars[i])==1){
                cnt++;

            }else{
                maxcnt=max(maxcnt,cnt);
                cnt=1;
            }

        }
         for(int i=0;i<len2-1;i++){
            if(abs(vBars[i+1]-vBars[i])==1){
                cnt2++;

            }else{
                maxcnt2=max(maxcnt2,cnt2);
                cnt2=1;
            }

        }
        maxcnt=max(maxcnt,cnt);
        maxcnt2=max(maxcnt2,cnt2);
        int ans=min(maxcnt+1,maxcnt2+1);
        return ans*ans;
        
    }
};