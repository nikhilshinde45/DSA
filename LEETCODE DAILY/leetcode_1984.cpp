class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
     
    if(k==1) return 0;
    sort(nums.begin(),nums.end());
    long long  mini=LLONG_MAX;
    int n=nums.size();
    for (int i = 0; i + k - 1 < n; i++) {
            mini = min(mini, (long long)(nums[i + k - 1] - nums[i]));
        }

    return mini ;
    }
};