class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end())) return 0;
        int n = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        // int p=-1;
        // int q = -1;
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] < nums[i-1]){
                mini = min(mini, nums[i]);
                maxi = max(maxi, nums[i-1]);
            }
            if(i < n-1 && nums[i] > nums[i+1]){
                mini = min(mini, nums[i+1]);
                maxi = max(maxi, nums[i]);
            }
        }
       int p=  0;
       int q = n-1;
       while(p<n && nums[p]<=mini){
          p++;
       }
       while(q>=0 && nums[q]>=maxi){
         q--;
       }
        return q-p+1;

       ;
    }
};