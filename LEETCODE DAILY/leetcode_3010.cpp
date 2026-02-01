class Solution {
public:

    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        if(n==3){
            int s=accumulate(nums.begin(),nums.end(),0);
            return s;
        }
        int mini=nums[0];
        int mn1=INT_MAX;
        int mn2=INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i]<mn1){
                mn2=mn1;
                mn1=nums[i];
            }
            else if (nums[i] < mn2) {
                mn2 = nums[i];
            }
        }
       
  return mn2+mn1+mini;
        
    }
};