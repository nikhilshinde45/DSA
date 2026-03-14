class Solution {
public:
    long long validSubstringCount(string word1, string word2) {

        unordered_map<int,int>mp;
        for(auto i:word2) mp[i]++;

        int left = 0;
        int right = 0;
        int n = word1.length();
        int miss = word2.length();

        long long ans =0;

        while(right<n){
            mp[word1[right]]--;
            if(mp[word1[right]] >= 0) miss--;

            if(miss == 0){

                ans += (n - right);

                while(true){
                    mp[word1[left]]++;

                    if(mp[word1[left]] > 0){
                        miss++;
                        left++;
                        break;
                    }

                    left++;
                    ans += (n-right);
                }


            }
                            right++;

        }


        return ans ;
        
    }
};