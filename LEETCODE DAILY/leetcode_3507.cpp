class Solution {
public:
  bool check(vector<int>&nums){
    vector<int>b=nums;
    sort(b.begin(),b.end());
    return b==nums;
  }
  int helper(vector<int>&nums,int n){
    int mini=INT_MAX;
    int k=0;
     for(int i=0;i<n-1;i++){
        if(nums[i]+nums[i+1]<mini){
            mini=nums[i]+nums[i+1];
            k=i;
        }

     }
     return k;
  }
    int minimumPairRemoval(vector<int>& nums) {

       int cnt=0;
       //int n=nums.size();
       while(check(nums)==false){
        int n=nums.size();
        int res=helper(nums,n);
        nums[res]=nums[res]+nums[res+1];
        nums.erase(nums.begin()+res+1);
        cnt++;
       }

       return cnt;

        
    }
};