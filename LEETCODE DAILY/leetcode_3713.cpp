class Solution {
public:
    int longestBalanced(string s) {
    //     int n  = s.length();
    //    // int cnt = 1 ;
    //     int maxi=0;
    //     if(n==1) return 1 ;
    //                     set<int>st;

    //     unordered_map<char , int >mp;
    //     for(int i = 0;i < n; i++){
    //         mp[s[i]]++;
    //         for(int j=i+1;j<n;j++){
    //             mp[s[j]]++;
    //            // int f=0;
    //                                        st.clear();

    //             for(auto it:mp){
    //                 st.insert(it.second);
    //             }
    //             if(st.size() == 1){
    //                 //cnt++;
    //                 maxi = max(maxi,j-i+1);
    //             }

    //         }
    //         //cnt = 0 ;

    //         mp.clear();


    //     }
    //     return maxi ;
     int n = s.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            int distinct = 0;
            int maxFreq = 0;

            for (int j = i; j < n; j++) {
                int c = s[j] - 'a';
                if (freq[c] == 0) distinct++;
                freq[c]++;
                maxFreq = max(maxFreq, freq[c]);

                int len = j - i + 1;

                if (distinct * maxFreq == len) {
                    ans = max(ans, len);
                }
            }
        }
        return ans;
        
    }
};