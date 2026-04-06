class Solution {
public:

    int mirrorFrequency(string s) {
        int n = s.length();
        vector<int>charsfreq(26);
        vector<int>numsfreq(10);

        for(int i = 0 ; i < n ; i++){
             if(s[i] >= 'a' && s[i] <= 'z'){
                 charsfreq[s[i]-'a']++;
             }else{
                 numsfreq[s[i]-'0']++;
             }
        }
        // for(auto it:charsfreq)cout<<it<<" ";
        // cout<<endl;
        // for(auto it:numsfreq)cout<<it<<" ";
        // cout<<endl;

        int ans = 0 ;
        for(int i = 0 ; i < 13 ; i++){
             ans += abs(charsfreq[i] - charsfreq[26-i-1]);
        }
        for(int i = 0 ; i < 5 ; i++){
             ans+=abs(numsfreq[i]-numsfreq[10-i-1]);
        }

        return ans;
       
        
    }
};