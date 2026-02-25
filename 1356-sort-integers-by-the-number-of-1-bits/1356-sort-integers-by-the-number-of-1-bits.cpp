class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>vec;
        int n = arr.size();
        for(int i = 0;i < n ; i++){
            int k = __builtin_popcount(arr[i]);
            vec.push_back({arr[i],k});
        }

        sort(vec.begin() , vec.end() ,[&](auto & a,auto &b){
               if(a.second == b.second) return a.first < b.first;
                return a.second < b.second;
        });
        vector<int>ans;
        for(auto it:vec){
            ans.push_back(it.first);
        }

        return ans ;
        
    }
};