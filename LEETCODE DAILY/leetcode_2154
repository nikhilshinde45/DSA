class Solution {
public:
 bool check(vector<int>&nums,int n,int key){
     bool f=false;
     for(int i=0;i<n;i++){
         if(nums[i]==key){
             f=true;
             break;
         }
     }
     return f;
 }
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
       
             while(check(nums,n,original)){
                 original=2*original;
             }
             return original;
       
    }
};