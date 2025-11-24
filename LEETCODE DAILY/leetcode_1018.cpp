class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        vector<bool>ans;
        for(int i=0;i<n;i++){
             s=(s*2+nums[i])%5;
             if(s%5==0){
                 ans.push_back(true);
             }else{
                 ans.push_back(false);
             }
        }
        return ans;
        
    }
};