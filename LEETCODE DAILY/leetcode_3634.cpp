class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=INT_MIN;
        int i =0 ;
        int j=0;
        int cnt=0;
        sort(nums.begin(),nums.end());
        while(j<n){
            if(nums[i]*1LL*k>=nums[j]){
                               maxi=max(maxi,(j-i+1));

                j++;
            }else{
               i++;

            }
        }
        return n-maxi;

       

        
    }
};